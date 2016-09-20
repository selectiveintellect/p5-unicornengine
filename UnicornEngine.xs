#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <include/unicorn/unicorn.h>

#include "const-c.inc"

MODULE = UnicornEngine		PACKAGE = UnicornEngine		

INCLUDE: const-xs.inc
