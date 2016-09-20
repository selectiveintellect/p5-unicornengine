#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_ARG UC_ERR_MAP UC_MODE_16 UC_MODE_32 UC_MODE_64 UC_MODE_V8
     UC_MODE_V9 */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case '2':
    if (memEQ(name, "UC_MODE_3", 9)) {
    /*                        2     */
      *iv_return = UC_MODE_32;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "UC_MODE_6", 9)) {
    /*                        4     */
      *iv_return = UC_MODE_64;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "UC_MODE_1", 9)) {
    /*                        6     */
      *iv_return = UC_MODE_16;
      return PERL_constant_ISIV;
    }
    break;
  case '8':
    if (memEQ(name, "UC_MODE_V", 9)) {
    /*                        8     */
      *iv_return = UC_MODE_V8;
      return PERL_constant_ISIV;
    }
    break;
  case '9':
    if (memEQ(name, "UC_MODE_V", 9)) {
    /*                        9     */
      *iv_return = UC_MODE_V9;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "UC_ERR_AR", 9)) {
    /*                        G     */
      *iv_return = UC_ERR_ARG;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "UC_ERR_MA", 9)) {
    /*                        P     */
      *iv_return = UC_ERR_MAP;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ARCH_ARM UC_ARCH_MAX UC_ARCH_PPC UC_ARCH_X86 UC_ERR_ARCH UC_ERR_HOOK
     UC_ERR_MODE UC_MEM_READ UC_MODE_ARM UC_MODE_QPX UC_PROT_ALL */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case '6':
    if (memEQ(name, "UC_ARCH_X8", 10)) {
    /*                         6      */
      *iv_return = UC_ARCH_X86;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "UC_ARCH_PP", 10)) {
    /*                         C      */
      *iv_return = UC_ARCH_PPC;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "UC_MEM_REA", 10)) {
    /*                         D      */
      *iv_return = UC_MEM_READ;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "UC_ERR_MOD", 10)) {
    /*                         E      */
      *iv_return = UC_ERR_MODE;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "UC_ERR_ARC", 10)) {
    /*                         H      */
      *iv_return = UC_ERR_ARCH;
      return PERL_constant_ISIV;
    }
    break;
  case 'K':
    if (memEQ(name, "UC_ERR_HOO", 10)) {
    /*                         K      */
      *iv_return = UC_ERR_HOOK;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "UC_PROT_AL", 10)) {
    /*                         L      */
      *iv_return = UC_PROT_ALL;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "UC_ARCH_AR", 10)) {
    /*                         M      */
      *iv_return = UC_ARCH_ARM;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MODE_AR", 10)) {
    /*                         M      */
      *iv_return = UC_MODE_ARM;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "UC_ARCH_MA", 10)) {
    /*                         X      */
      *iv_return = UC_ARCH_MAX;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MODE_QP", 10)) {
    /*                         X      */
      *iv_return = UC_MODE_QPX;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ARCH_M68K UC_ARCH_MIPS UC_ERR_NOMEM UC_HOOK_CODE UC_HOOK_INSN
     UC_HOOK_INTR UC_MEM_FETCH UC_MEM_WRITE UC_PROT_EXEC UC_PROT_NONE
     UC_PROT_READ */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case '8':
    if (memEQ(name, "UC_ARCH_M68K", 12)) {
    /*                         ^        */
      *iv_return = UC_ARCH_M68K;
      return PERL_constant_ISIV;
    }
    break;
  case 'A':
    if (memEQ(name, "UC_PROT_READ", 12)) {
    /*                         ^        */
      *iv_return = UC_PROT_READ;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "UC_MEM_FETCH", 12)) {
    /*                         ^        */
      *iv_return = UC_MEM_FETCH;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "UC_HOOK_CODE", 12)) {
    /*                         ^        */
      *iv_return = UC_HOOK_CODE;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "UC_ERR_NOMEM", 12)) {
    /*                         ^        */
      *iv_return = UC_ERR_NOMEM;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_PROT_EXEC", 12)) {
    /*                         ^        */
      *iv_return = UC_PROT_EXEC;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "UC_PROT_NONE", 12)) {
    /*                         ^        */
      *iv_return = UC_PROT_NONE;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "UC_ARCH_MIPS", 12)) {
    /*                         ^        */
      *iv_return = UC_ARCH_MIPS;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "UC_HOOK_INSN", 12)) {
    /*                         ^        */
      *iv_return = UC_HOOK_INSN;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "UC_HOOK_INTR", 12)) {
    /*                         ^        */
      *iv_return = UC_HOOK_INTR;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_WRITE", 12)) {
    /*                         ^        */
      *iv_return = UC_MEM_WRITE;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ARCH_ARM64 UC_ARCH_SPARC UC_ERR_HANDLE UC_HOOK_BLOCK UC_MODE_MICRO
     UC_MODE_MIPS3 UC_MODE_PPC32 UC_MODE_PPC64 UC_MODE_THUMB UC_PROT_WRITE
     UC_QUERY_MODE */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case '3':
    if (memEQ(name, "UC_MODE_PPC32", 13)) {
    /*                          ^        */
      *iv_return = UC_MODE_PPC32;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "UC_ARCH_ARM64", 13)) {
    /*                          ^        */
      *iv_return = UC_ARCH_ARM64;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MODE_PPC64", 13)) {
    /*                          ^        */
      *iv_return = UC_MODE_PPC64;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "UC_HOOK_BLOCK", 13)) {
    /*                          ^        */
      *iv_return = UC_HOOK_BLOCK;
      return PERL_constant_ISIV;
    }
    break;
  case 'D':
    if (memEQ(name, "UC_QUERY_MODE", 13)) {
    /*                          ^        */
      *iv_return = UC_QUERY_MODE;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "UC_ERR_HANDLE", 13)) {
    /*                          ^        */
      *iv_return = UC_ERR_HANDLE;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "UC_MODE_THUMB", 13)) {
    /*                          ^        */
      *iv_return = UC_MODE_THUMB;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "UC_ARCH_SPARC", 13)) {
    /*                          ^        */
      *iv_return = UC_ARCH_SPARC;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MODE_MICRO", 13)) {
    /*                          ^        */
      *iv_return = UC_MODE_MICRO;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "UC_MODE_MIPS3", 13)) {
    /*                          ^        */
      *iv_return = UC_MODE_MIPS3;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "UC_PROT_WRITE", 13)) {
    /*                          ^        */
      *iv_return = UC_PROT_WRITE;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_VERSION UC_MODE_MCLASS UC_MODE_MIPS32 UC_MODE_MIPS64 */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case '3':
    if (memEQ(name, "UC_MODE_MIPS32", 14)) {
    /*                           ^        */
      *iv_return = UC_MODE_MIPS32;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "UC_MODE_MIPS64", 14)) {
    /*                           ^        */
      *iv_return = UC_MODE_MIPS64;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "UC_ERR_VERSION", 14)) {
    /*                           ^        */
      *iv_return = UC_ERR_VERSION;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "UC_MODE_MCLASS", 14)) {
    /*                           ^        */
      *iv_return = UC_MODE_MCLASS;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_RESOURCE UC_MODE_SPARC32 UC_MODE_SPARC64 */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case '3':
    if (memEQ(name, "UC_MODE_SPARC32", 15)) {
    /*                            ^        */
      *iv_return = UC_MODE_SPARC32;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "UC_MODE_SPARC64", 15)) {
    /*                            ^        */
      *iv_return = UC_MODE_SPARC64;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "UC_ERR_RESOURCE", 15)) {
    /*                            ^        */
      *iv_return = UC_ERR_RESOURCE;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_EXCEPTION UC_ERR_READ_PROT UC_HOOK_MEM_READ UC_MEM_READ_PROT
     UC_MODE_MIPS32R6 */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'A':
    if (memEQ(name, "UC_ERR_READ_PROT", 16)) {
    /*                        ^             */
      *iv_return = UC_ERR_READ_PROT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_READ_PROT", 16)) {
    /*                        ^             */
      *iv_return = UC_MEM_READ_PROT;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "UC_ERR_EXCEPTION", 16)) {
    /*                        ^             */
      *iv_return = UC_ERR_EXCEPTION;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "UC_HOOK_MEM_READ", 16)) {
    /*                        ^             */
      *iv_return = UC_HOOK_MEM_READ;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "UC_MODE_MIPS32R6", 16)) {
    /*                        ^             */
      *iv_return = UC_MODE_MIPS32R6;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_FETCH_PROT UC_ERR_HOOK_EXIST UC_ERR_WRITE_PROT UC_HOOK_MEM_FETCH
     UC_HOOK_MEM_WRITE UC_MEM_FETCH_PROT UC_MEM_WRITE_PROT */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'E':
    if (memEQ(name, "UC_ERR_FETCH_PROT", 17)) {
    /*                       ^               */
      *iv_return = UC_ERR_FETCH_PROT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_FETCH_PROT", 17)) {
    /*                       ^               */
      *iv_return = UC_MEM_FETCH_PROT;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "UC_HOOK_MEM_FETCH", 17)) {
    /*                       ^               */
      *iv_return = UC_HOOK_MEM_FETCH;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_HOOK_MEM_WRITE", 17)) {
    /*                       ^               */
      *iv_return = UC_HOOK_MEM_WRITE;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "UC_ERR_HOOK_EXIST", 17)) {
    /*                       ^               */
      *iv_return = UC_ERR_HOOK_EXIST;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "UC_ERR_WRITE_PROT", 17)) {
    /*                       ^               */
      *iv_return = UC_ERR_WRITE_PROT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_WRITE_PROT", 17)) {
    /*                       ^               */
      *iv_return = UC_MEM_WRITE_PROT;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_FETCH_UNMAPPED UC_ERR_READ_UNALIGNED UC_ERR_WRITE_UNMAPPED
     UC_HOOK_MEM_READ_PROT UC_MEM_FETCH_UNMAPPED UC_MEM_WRITE_UNMAPPED
     UC_MODE_LITTLE_ENDIAN */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'F':
    if (memEQ(name, "UC_ERR_FETCH_UNMAPPED", 21)) {
    /*                      ^                    */
      *iv_return = UC_ERR_FETCH_UNMAPPED;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_FETCH_UNMAPPED", 21)) {
    /*                      ^                    */
      *iv_return = UC_MEM_FETCH_UNMAPPED;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "UC_ERR_READ_UNALIGNED", 21)) {
    /*                      ^                    */
      *iv_return = UC_ERR_READ_UNALIGNED;
      return PERL_constant_ISIV;
    }
    break;
  case 'W':
    if (memEQ(name, "UC_ERR_WRITE_UNMAPPED", 21)) {
    /*                      ^                    */
      *iv_return = UC_ERR_WRITE_UNMAPPED;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MEM_WRITE_UNMAPPED", 21)) {
    /*                      ^                    */
      *iv_return = UC_MEM_WRITE_UNMAPPED;
      return PERL_constant_ISIV;
    }
    break;
  case '_':
    if (memEQ(name, "UC_HOOK_MEM_READ_PROT", 21)) {
    /*                      ^                    */
      *iv_return = UC_HOOK_MEM_READ_PROT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_MODE_LITTLE_ENDIAN", 21)) {
    /*                      ^                    */
      *iv_return = UC_MODE_LITTLE_ENDIAN;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     UC_ERR_FETCH_UNALIGNED UC_ERR_WRITE_UNALIGNED UC_HOOK_MEM_FETCH_PROT
     UC_HOOK_MEM_WRITE_PROT */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'E':
    if (memEQ(name, "UC_HOOK_MEM_WRITE_PROT", 22)) {
    /*                               ^            */
      *iv_return = UC_HOOK_MEM_WRITE_PROT;
      return PERL_constant_ISIV;
    }
    break;
  case 'H':
    if (memEQ(name, "UC_HOOK_MEM_FETCH_PROT", 22)) {
    /*                               ^            */
      *iv_return = UC_HOOK_MEM_FETCH_PROT;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "UC_ERR_FETCH_UNALIGNED", 22)) {
    /*                               ^            */
      *iv_return = UC_ERR_FETCH_UNALIGNED;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "UC_ERR_WRITE_UNALIGNED", 22)) {
    /*                               ^            */
      *iv_return = UC_ERR_WRITE_UNALIGNED;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(),
            {name=>"UC_ARCH_ARM", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_ARM64", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_M68K", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_MAX", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_MIPS", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_PPC", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_SPARC", type=>"IV", macro=>"1"},
            {name=>"UC_ARCH_X86", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_ARCH", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_ARG", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_EXCEPTION", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_FETCH_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_FETCH_UNALIGNED", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_FETCH_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_HANDLE", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_HOOK", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_HOOK_EXIST", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_INSN_INVALID", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_MAP", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_MODE", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_NOMEM", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_OK", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_READ_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_READ_UNALIGNED", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_READ_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_RESOURCE", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_VERSION", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_WRITE_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_WRITE_UNALIGNED", type=>"IV", macro=>"1"},
            {name=>"UC_ERR_WRITE_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_BLOCK", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_CODE", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_INSN", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_INTR", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_FETCH", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_FETCH_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_FETCH_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_READ", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_READ_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_READ_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_WRITE", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_WRITE_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_HOOK_MEM_WRITE_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_FETCH", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_FETCH_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_FETCH_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_READ", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_READ_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_READ_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_WRITE", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_WRITE_PROT", type=>"IV", macro=>"1"},
            {name=>"UC_MEM_WRITE_UNMAPPED", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_16", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_32", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_64", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_ARM", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_BIG_ENDIAN", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_LITTLE_ENDIAN", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MCLASS", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MICRO", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MIPS3", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MIPS32", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MIPS32R6", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_MIPS64", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_PPC32", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_PPC64", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_QPX", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_SPARC32", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_SPARC64", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_THUMB", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_V8", type=>"IV", macro=>"1"},
            {name=>"UC_MODE_V9", type=>"IV", macro=>"1"},
            {name=>"UC_PROT_ALL", type=>"IV", macro=>"1"},
            {name=>"UC_PROT_EXEC", type=>"IV", macro=>"1"},
            {name=>"UC_PROT_NONE", type=>"IV", macro=>"1"},
            {name=>"UC_PROT_READ", type=>"IV", macro=>"1"},
            {name=>"UC_PROT_WRITE", type=>"IV", macro=>"1"},
            {name=>"UC_QUERY_MODE", type=>"IV", macro=>"1"},
            {name=>"UC_QUERY_PAGE_SIZE", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("UnicornEngine", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("UnicornEngine", $types);
__END__
   */

  switch (len) {
  case 9:
    if (memEQ(name, "UC_ERR_OK", 9)) {
      *iv_return = UC_ERR_OK;
      return PERL_constant_ISIV;
    }
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    /* Names all of length 18.  */
    /* UC_MODE_BIG_ENDIAN UC_QUERY_PAGE_SIZE */
    /* Offset 5 gives the best switch position.  */
    switch (name[5]) {
    case 'D':
      if (memEQ(name, "UC_MODE_BIG_ENDIAN", 18)) {
      /*                    ^                   */
        *iv_return = UC_MODE_BIG_ENDIAN;
        return PERL_constant_ISIV;
      }
      break;
    case 'E':
      if (memEQ(name, "UC_QUERY_PAGE_SIZE", 18)) {
      /*                    ^                   */
        *iv_return = UC_QUERY_PAGE_SIZE;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 19:
    if (memEQ(name, "UC_ERR_INSN_INVALID", 19)) {
      *iv_return = UC_ERR_INSN_INVALID;
      return PERL_constant_ISIV;
    }
    break;
  case 20:
    /* Names all of length 20.  */
    /* UC_ERR_READ_UNMAPPED UC_MEM_READ_UNMAPPED */
    /* Offset 5 gives the best switch position.  */
    switch (name[5]) {
    case 'M':
      if (memEQ(name, "UC_MEM_READ_UNMAPPED", 20)) {
      /*                    ^                     */
        *iv_return = UC_MEM_READ_UNMAPPED;
        return PERL_constant_ISIV;
      }
      break;
    case 'R':
      if (memEQ(name, "UC_ERR_READ_UNMAPPED", 20)) {
      /*                    ^                     */
        *iv_return = UC_ERR_READ_UNMAPPED;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 25:
    if (memEQ(name, "UC_HOOK_MEM_READ_UNMAPPED", 25)) {
      *iv_return = UC_HOOK_MEM_READ_UNMAPPED;
      return PERL_constant_ISIV;
    }
    break;
  case 26:
    /* Names all of length 26.  */
    /* UC_HOOK_MEM_FETCH_UNMAPPED UC_HOOK_MEM_WRITE_UNMAPPED */
    /* Offset 16 gives the best switch position.  */
    switch (name[16]) {
    case 'E':
      if (memEQ(name, "UC_HOOK_MEM_WRITE_UNMAPPED", 26)) {
      /*                               ^                */
        *iv_return = UC_HOOK_MEM_WRITE_UNMAPPED;
        return PERL_constant_ISIV;
      }
      break;
    case 'H':
      if (memEQ(name, "UC_HOOK_MEM_FETCH_UNMAPPED", 26)) {
      /*                               ^                */
        *iv_return = UC_HOOK_MEM_FETCH_UNMAPPED;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

