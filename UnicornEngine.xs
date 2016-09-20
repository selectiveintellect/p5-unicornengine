#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <unicorn/unicorn.h>

#include "const-c.inc"

MODULE = UnicornEngine		PACKAGE = UnicornEngine		

INCLUDE: const-xs.inc

int is_arch_supported(arch)
        uc_arch arch 
    CODE:
        RETVAL = (uc_arch_supported(arch) ? 1 : 0);
    OUTPUT:
        RETVAL

