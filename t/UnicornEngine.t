# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl UnicornEngine.t'

#########################

# change 'tests => 2' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More;
BEGIN { use_ok('UnicornEngine') };


my $fail = 0;
foreach my $constname (qw(
	UC_ARCH_ARM UC_ARCH_ARM64 UC_ARCH_M68K UC_ARCH_MAX UC_ARCH_MIPS
	UC_ARCH_PPC UC_ARCH_SPARC UC_ARCH_X86 UC_ERR_ARCH UC_ERR_ARG
	UC_ERR_EXCEPTION UC_ERR_FETCH_PROT UC_ERR_FETCH_UNALIGNED
	UC_ERR_FETCH_UNMAPPED UC_ERR_HANDLE UC_ERR_HOOK UC_ERR_HOOK_EXIST
	UC_ERR_INSN_INVALID UC_ERR_MAP UC_ERR_MODE UC_ERR_NOMEM UC_ERR_OK
	UC_ERR_READ_PROT UC_ERR_READ_UNALIGNED UC_ERR_READ_UNMAPPED
	UC_ERR_RESOURCE UC_ERR_VERSION UC_ERR_WRITE_PROT UC_ERR_WRITE_UNALIGNED
	UC_ERR_WRITE_UNMAPPED UC_HOOK_BLOCK UC_HOOK_CODE UC_HOOK_INSN
	UC_HOOK_INTR UC_HOOK_MEM_FETCH UC_HOOK_MEM_FETCH_PROT
	UC_HOOK_MEM_FETCH_UNMAPPED UC_HOOK_MEM_READ UC_HOOK_MEM_READ_PROT
	UC_HOOK_MEM_READ_UNMAPPED UC_HOOK_MEM_WRITE UC_HOOK_MEM_WRITE_PROT
	UC_HOOK_MEM_WRITE_UNMAPPED UC_MEM_FETCH UC_MEM_FETCH_PROT
	UC_MEM_FETCH_UNMAPPED UC_MEM_READ UC_MEM_READ_PROT UC_MEM_READ_UNMAPPED
	UC_MEM_WRITE UC_MEM_WRITE_PROT UC_MEM_WRITE_UNMAPPED UC_MODE_16
	UC_MODE_32 UC_MODE_64 UC_MODE_ARM UC_MODE_BIG_ENDIAN
	UC_MODE_LITTLE_ENDIAN UC_MODE_MCLASS UC_MODE_MICRO UC_MODE_MIPS3
	UC_MODE_MIPS32 UC_MODE_MIPS32R6 UC_MODE_MIPS64 UC_MODE_PPC32
	UC_MODE_PPC64 UC_MODE_QPX UC_MODE_SPARC32 UC_MODE_SPARC64 UC_MODE_THUMB
	UC_MODE_V8 UC_MODE_V9 UC_PROT_ALL UC_PROT_EXEC UC_PROT_NONE
	UC_PROT_READ UC_PROT_WRITE UC_QUERY_MODE UC_QUERY_PAGE_SIZE)) {
  next if (eval "my \$a = $constname; 1");
  if ($@ =~ /^Your vendor has not defined UnicornEngine macro $constname/) {
    print "# pass: $@";
  } else {
    print "# fail: $@";
    $fail = 1;
  }

}

ok( $fail == 0 , 'Constants' );
#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

ok(&UnicornEngine::is_arch_supported(UC_ARCH_ARM) == 1, 'ARM is supported');
note &UnicornEngine::version();
is(&UnicornEngine::version(), '1.0', 'Version is 1.0');

done_testing();
__END__
