use 5.014002;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'UnicornEngine',
    VERSION_FROM      => 'lib/UnicornEngine.pm', # finds $VERSION
    PREREQ_PM         => {}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/UnicornEngine.pm', # retrieve abstract from module
       AUTHOR         => 'Vikas Kumar <vikas@cpan.org>') : ()),
    LIBS              => ['-lunicorn'], # e.g., '-lm'
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => '-I.', # e.g., '-I. -I/usr/include/other'
	# Un-comment this if you add C files to link with later:
    # OBJECT            => '$(O_FILES)', # link all the C files too
);
if  (eval {require ExtUtils::Constant; 1}) {
  # If you edit these definitions to change the constants used by this module,
  # you will need to use the generated const-c.inc and const-xs.inc
  # files to replace their "fallback" counterparts before distributing your
  # changes.
  my @names = (qw(),
              {name=>"UC_ARCH_ARM", macro=>"1"},
              {name=>"UC_ARCH_ARM64", macro=>"2"},
              {name=>"UC_ARCH_MIPS", macro=>"3"},
              {name=>"UC_ARCH_X86", macro=>"4"},
              {name=>"UC_ARCH_PPC", macro=>"5"},
              {name=>"UC_ARCH_SPARC", macro=>"6"},
              {name=>"UC_ARCH_M68K", macro=>"7"},
              {name=>"UC_ARCH_MAX", macro=>"8"},

              {name=>"UC_ERR_OK", macro=>"0"},
              {name=>"UC_ERR_NOMEM", macro=>"1"},
              {name=>"UC_ERR_ARCH", macro=>"2"},
              {name=>"UC_ERR_HANDLE", macro=>"3"},
              {name=>"UC_ERR_MODE", macro=>"4"},
              {name=>"UC_ERR_VERSION", macro=>"5"},
              {name=>"UC_ERR_READ_UNMAPPED", macro=>"6"},
              {name=>"UC_ERR_WRITE_UNMAPPED", macro=>"7"},
              {name=>"UC_ERR_FETCH_UNMAPPED", macro=>"8"},
              {name=>"UC_ERR_HOOK", macro=>"9"},
              {name=>"UC_ERR_INSN_INVALID", macro=>"10"},
              {name=>"UC_ERR_MAP", macro=>"11"},
              {name=>"UC_ERR_WRITE_PROT", macro=>"12"},
              {name=>"UC_ERR_READ_PROT", macro=>"13"},
              {name=>"UC_ERR_FETCH_PROT", macro=>"14"},
              {name=>"UC_ERR_ARG", macro=>"15"},
              {name=>"UC_ERR_READ_UNALIGNED", macro=>"16"},
              {name=>"UC_ERR_WRITE_UNALIGNED", macro=>"17"},
              {name=>"UC_ERR_FETCH_UNALIGNED", macro=>"18"},
              {name=>"UC_ERR_HOOK_EXIST", macro=>"19"},
              {name=>"UC_ERR_RESOURCE", macro=>"20"},
              {name=>"UC_ERR_EXCEPTION", macro=>"21"},

              {name=>"UC_HOOK_INTR", macro=>"1 << 0"},
              {name=>"UC_HOOK_INSN", macro=>"1 << 1"},
              {name=>"UC_HOOK_CODE", macro=>"1 << 2"},
              {name=>"UC_HOOK_BLOCK", macro=>"1 << 3"},
              {name=>"UC_HOOK_MEM_READ_UNMAPPED", macro=>"1 << 4"},
              {name=>"UC_HOOK_MEM_WRITE_UNMAPPED", macro=>"1 << 5"},
              {name=>"UC_HOOK_MEM_FETCH_UNMAPPED", macro=>"1 << 6"},
              {name=>"UC_HOOK_MEM_READ_PROT", macro=>"1 << 7"},
              {name=>"UC_HOOK_MEM_WRITE_PROT", macro=>"1 << 8"},
              {name=>"UC_HOOK_MEM_FETCH_PROT", macro=>"1 << 9"},
              {name=>"UC_HOOK_MEM_READ", macro=>"1 << 10"},
              {name=>"UC_HOOK_MEM_WRITE", macro=>"1 << 11"},
              {name=>"UC_HOOK_MEM_FETCH", macro=>"1 << 12"},

              {name=>"UC_MEM_READ", macro=>"16"},
              {name=>"UC_MEM_WRITE", macro=>"17"},
              {name=>"UC_MEM_FETCH", macro=>"18"},
              {name=>"UC_MEM_READ_UNMAPPED", macro=>"19"},
              {name=>"UC_MEM_WRITE_UNMAPPED", macro=>"20"},
              {name=>"UC_MEM_FETCH_UNMAPPED", macro=>"21"},
              {name=>"UC_MEM_WRITE_PROT", macro=>"22"},
              {name=>"UC_MEM_READ_PROT", macro=>"23"},
              {name=>"UC_MEM_FETCH_PROT", macro=>"24"},

              {name=>"UC_MODE_LITTLE_ENDIAN", macro=>"0"},
              {name=>"UC_MODE_BIG_ENDIAN", macro=>"1 << 30"},
              {name=>"UC_MODE_ARM", macro=>"0"},
              {name=>"UC_MODE_THUMB", macro=>"1 << 4"},
              {name=>"UC_MODE_MCLASS", macro=>"1 << 5"},
              {name=>"UC_MODE_V8", macro=>"1 << 6"},
              {name=>"UC_MODE_MICRO", macro=>"1 << 4"},
              {name=>"UC_MODE_MIPS3", macro=>"1 << 5"},
              {name=>"UC_MODE_MIPS32R6", macro=>"1 << 6"},
              {name=>"UC_MODE_MIPS32", macro=>"1 << 2"},
              {name=>"UC_MODE_MIPS64", macro=>"1 << 3"},
              {name=>"UC_MODE_16", macro=>"1 << 1"},
              {name=>"UC_MODE_32", macro=>"1 << 2"},
              {name=>"UC_MODE_64", macro=>"1 << 3"},
              {name=>"UC_MODE_PPC32", macro=>"1 << 2"},
              {name=>"UC_MODE_PPC64", macro=>"1 << 3"},
              {name=>"UC_MODE_QPX", macro=>"1 << 4"},
              {name=>"UC_MODE_SPARC32", macro=>"1 << 2"},
              {name=>"UC_MODE_SPARC64", macro=>"1 << 3"},
              {name=>"UC_MODE_V9", macro=>"1 << 4"},
              {name=>"UC_PROT_NONE", macro=>"0"},
              {name=>"UC_PROT_READ", macro=>"1"},
              {name=>"UC_PROT_WRITE", macro=>"2"},
              {name=>"UC_PROT_EXEC", macro=>"4"},
              {name=>"UC_PROT_ALL", macro=>"7"},
              {name=>"UC_QUERY_MODE", macro=>"1"},
              {name=>"UC_QUERY_PAGE_SIZE", macro=>"2"});
  ExtUtils::Constant::WriteConstants(
                                     NAME         => 'UnicornEngine',
                                     NAMES        => \@names,
                                     DEFAULT_TYPE => 'IV',
                                     C_FILE       => 'const-c.inc',
                                     XS_FILE      => 'const-xs.inc',
                                  );

}
else {
  use File::Copy;
  use File::Spec;
  foreach my $file ('const-c.inc', 'const-xs.inc') {
    my $fallback = File::Spec->catfile('fallback', $file);
    copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
  }
}
