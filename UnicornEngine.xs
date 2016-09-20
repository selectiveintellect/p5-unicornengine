#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <unicorn/unicorn.h>

#include "const-c.inc"

MODULE = UnicornEngine		PACKAGE = UnicornEngine		

INCLUDE: const-xs.inc

unsigned int is_arch_supported(arch)
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
