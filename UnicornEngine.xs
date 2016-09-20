#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <unicorn/unicorn.h>

#include "const-c.inc"

typedef struct uc_perl_t {
    void *perl; /* context */
    void *parent; /* parent object */
    uc_engine *engine;
} uc_perl_t;

MODULE = UnicornEngine		PACKAGE = UnicornEngine		

INCLUDE: const-xs.inc

unsigned int
is_arch_supported(arch)
    uc_arch arch 
    CODE:
        RETVAL = (uc_arch_supported(arch) ? 1 : 0);
    OUTPUT:
        RETVAL

SV *
version()
    PREINIT:
        unsigned int major = 0, minor = 0;
        unsigned int ver = 0;
        char *verstr = NULL;
        const size_t verstr_len = 32 * sizeof(unsigned char);
    CODE:
        ver = uc_version(&major, &minor);
        if (ver == UC_MAKE_VERSION(UC_API_MAJOR, UC_API_MINOR)) {
            verstr = calloc((size_t)verstr_len, 1);
            if (verstr) {
                snprintf(verstr, verstr_len, "%u.%u", major, minor);
                /* this is a NULL terminated string */
                RETVAL = newSVpv(verstr, 0);
                free(verstr);
            } else {
                Perl_croak(aTHX_ "Out of memory for allocating string for %zu bytes\n",
                            verstr_len);
            }
        } else {
            Perl_croak(aTHX_ "Linked version of Unicorn Engine has version %u.%u and compiled version is %u.%u\n",
                        major, minor, UC_API_MAJOR, UC_API_MINOR);
        }
    OUTPUT:
        RETVAL


uc_perl_t *
uc_perl_new(parent, arch, mode)
    SV *parent
    uc_arch arch
    uc_mode mode
    PREINIT:
        uc_engine *engine = NULL;
        uc_err err = UC_ERR_OK;
    CODE:
        RETVAL = (uc_perl_t *)calloc(1, sizeof(uc_perl_t));
        if (RETVAL) {
            RETVAL->perl = Perl_get_context();
            RETVAL->parent = (void *)SvREFCNT_inc(parent);
            err = uc_open(arch, mode, &engine);
            if (err == UC_ERR_OK) {
                RETVAL->engine = engine;
            } else {
                RETVAL->engine = NULL;
                warn("Error in creating uc_engine. Error: %s", uc_strerror(err));
            }
        } else {
            Perl_croak(aTHX_ "Out of memory allocating uc_perl_t object\n");
        }
    OUTPUT:
        RETVAL

void
uc_perl_DESTROY(obj)
    uc_perl_t *obj
    CODE:
        if (obj) {
            SV *parent = obj->parent;
            SvREFCNT_dec(parent);
            if (obj->engine) {
                uc_err err = uc_close(obj->engine);
                if (err != UC_ERR_OK) {
                    warn("Error in creating uc_engine. Error: %s", uc_strerror(err));
                }
                obj->engine = NULL;
            }
            free(obj);
        }


