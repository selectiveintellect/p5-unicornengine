package UnicornEngine;

use 5.014002;
use strict;
use warnings;
use Carp;
use Math::Int64;

require Exporter;
use AutoLoader;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use UnicornEngine ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	UC_ARCH_ARM
	UC_ARCH_ARM64
	UC_ARCH_M68K
	UC_ARCH_MAX
	UC_ARCH_MIPS
	UC_ARCH_PPC
	UC_ARCH_SPARC
	UC_ARCH_X86
	UC_ERR_ARCH
	UC_ERR_ARG
	UC_ERR_EXCEPTION
	UC_ERR_FETCH_PROT
	UC_ERR_FETCH_UNALIGNED
	UC_ERR_FETCH_UNMAPPED
	UC_ERR_HANDLE
	UC_ERR_HOOK
	UC_ERR_HOOK_EXIST
	UC_ERR_INSN_INVALID
	UC_ERR_MAP
	UC_ERR_MODE
	UC_ERR_NOMEM
	UC_ERR_OK
	UC_ERR_READ_PROT
	UC_ERR_READ_UNALIGNED
	UC_ERR_READ_UNMAPPED
	UC_ERR_RESOURCE
	UC_ERR_VERSION
	UC_ERR_WRITE_PROT
	UC_ERR_WRITE_UNALIGNED
	UC_ERR_WRITE_UNMAPPED
	UC_HOOK_BLOCK
	UC_HOOK_CODE
	UC_HOOK_INSN
	UC_HOOK_INTR
	UC_HOOK_MEM_FETCH
	UC_HOOK_MEM_FETCH_PROT
	UC_HOOK_MEM_FETCH_UNMAPPED
	UC_HOOK_MEM_READ
	UC_HOOK_MEM_READ_PROT
	UC_HOOK_MEM_READ_UNMAPPED
	UC_HOOK_MEM_WRITE
	UC_HOOK_MEM_WRITE_PROT
	UC_HOOK_MEM_WRITE_UNMAPPED
	UC_MEM_FETCH
	UC_MEM_FETCH_PROT
	UC_MEM_FETCH_UNMAPPED
	UC_MEM_READ
	UC_MEM_READ_PROT
	UC_MEM_READ_UNMAPPED
	UC_MEM_WRITE
	UC_MEM_WRITE_PROT
	UC_MEM_WRITE_UNMAPPED
	UC_MODE_16
	UC_MODE_32
	UC_MODE_64
	UC_MODE_ARM
	UC_MODE_BIG_ENDIAN
	UC_MODE_LITTLE_ENDIAN
	UC_MODE_MCLASS
	UC_MODE_MICRO
	UC_MODE_MIPS3
	UC_MODE_MIPS32
	UC_MODE_MIPS32R6
	UC_MODE_MIPS64
	UC_MODE_PPC32
	UC_MODE_PPC64
	UC_MODE_QPX
	UC_MODE_SPARC32
	UC_MODE_SPARC64
	UC_MODE_THUMB
	UC_MODE_V8
	UC_MODE_V9
	UC_PROT_ALL
	UC_PROT_EXEC
	UC_PROT_NONE
	UC_PROT_READ
	UC_PROT_WRITE
	UC_QUERY_MODE
	UC_QUERY_PAGE_SIZE
    UC_HOOK_MEM_VALID
    UC_HOOK_MEM_INVALID
    UC_HOOK_MEM_PROT
    UC_HOOK_MEM_UNMAPPED
    UC_HOOK_MEM_READ_INVALID
    UC_HOOK_MEM_WRITE_INVALID
    UC_HOOK_MEM_FETCH_INVALID
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );

our @EXPORT = qw(
	UC_ARCH_ARM
	UC_ARCH_ARM64
	UC_ARCH_M68K
	UC_ARCH_MAX
	UC_ARCH_MIPS
	UC_ARCH_PPC
	UC_ARCH_SPARC
	UC_ARCH_X86
	UC_ERR_ARCH
	UC_ERR_ARG
	UC_ERR_EXCEPTION
	UC_ERR_FETCH_PROT
	UC_ERR_FETCH_UNALIGNED
	UC_ERR_FETCH_UNMAPPED
	UC_ERR_HANDLE
	UC_ERR_HOOK
	UC_ERR_HOOK_EXIST
	UC_ERR_INSN_INVALID
	UC_ERR_MAP
	UC_ERR_MODE
	UC_ERR_NOMEM
	UC_ERR_OK
	UC_ERR_READ_PROT
	UC_ERR_READ_UNALIGNED
	UC_ERR_READ_UNMAPPED
	UC_ERR_RESOURCE
	UC_ERR_VERSION
	UC_ERR_WRITE_PROT
	UC_ERR_WRITE_UNALIGNED
	UC_ERR_WRITE_UNMAPPED
	UC_HOOK_BLOCK
	UC_HOOK_CODE
	UC_HOOK_INSN
	UC_HOOK_INTR
	UC_HOOK_MEM_FETCH
	UC_HOOK_MEM_FETCH_PROT
	UC_HOOK_MEM_FETCH_UNMAPPED
	UC_HOOK_MEM_READ
	UC_HOOK_MEM_READ_PROT
	UC_HOOK_MEM_READ_UNMAPPED
	UC_HOOK_MEM_WRITE
	UC_HOOK_MEM_WRITE_PROT
	UC_HOOK_MEM_WRITE_UNMAPPED
    UC_HOOK_MEM_VALID
    UC_HOOK_MEM_INVALID
    UC_HOOK_MEM_PROT
    UC_HOOK_MEM_UNMAPPED
    UC_HOOK_MEM_READ_INVALID
    UC_HOOK_MEM_WRITE_INVALID
    UC_HOOK_MEM_FETCH_INVALID
	UC_MEM_FETCH
	UC_MEM_FETCH_PROT
	UC_MEM_FETCH_UNMAPPED
	UC_MEM_READ
	UC_MEM_READ_PROT
	UC_MEM_READ_UNMAPPED
	UC_MEM_WRITE
	UC_MEM_WRITE_PROT
	UC_MEM_WRITE_UNMAPPED
	UC_MODE_16
	UC_MODE_32
	UC_MODE_64
	UC_MODE_ARM
	UC_MODE_BIG_ENDIAN
	UC_MODE_LITTLE_ENDIAN
	UC_MODE_MCLASS
	UC_MODE_MICRO
	UC_MODE_MIPS3
	UC_MODE_MIPS32
	UC_MODE_MIPS32R6
	UC_MODE_MIPS64
	UC_MODE_PPC32
	UC_MODE_PPC64
	UC_MODE_QPX
	UC_MODE_SPARC32
	UC_MODE_SPARC64
	UC_MODE_THUMB
	UC_MODE_V8
	UC_MODE_V9
	UC_PROT_ALL
	UC_PROT_EXEC
	UC_PROT_NONE
	UC_PROT_READ
	UC_PROT_WRITE
	UC_QUERY_MODE
	UC_QUERY_PAGE_SIZE
);

our $VERSION = '0.01_1';

sub AUTOLOAD {
    # This AUTOLOAD is used to 'autoload' constants from the constant()
    # XS function.

    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&UnicornEngine::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
	# Fixed between 5.005_53 and 5.005_61
#XXX	if ($] >= 5.00561) {
#XXX	    *$AUTOLOAD = sub () { $val };
#XXX	}
#XXX	else {
	    *$AUTOLOAD = sub { $val };
#XXX	}
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('UnicornEngine', $VERSION);

# Preloaded methods go here.

sub new {
    my $cls = shift;
    my $class = ref($cls) || $cls;
    my %args = @_;
    my $self = bless({%args}, $class);
    unless ($args{arch} and $args{mode}) {
        warn "You need to specify the 'arch' and 'mode' arguments to this function";
        return undef;
    }
    my $obj = uc_perl_new($self, $args{arch}, $args{mode});
    return undef unless $obj;
    $self->{uc_perl} = $obj;
    return $self;
}

sub DESTROY {
    uc_perl_DESTROY($_[0]->{uc_perl}) if $_[0]->{uc_perl};
}

sub query {
    return uc_perl_query($_[0]->{uc_perl}, $_[1]);
}

sub errno {
    return uc_perl_errno($_[0]->{uc_perl});
}

sub reg_write {
    return uc_perl_reg_write($_[0]->{uc_perl}, $_[1], $_[2]);
}

sub reg_read {
    return uc_perl_reg_read($_[0]->{uc_perl}, $_[1]);
}

sub mem_map {
    return uc_perl_mem_map($_[0]->{uc_perl}, $_[1],
                            $_[2], $_[3] || UC_PROT_ALL());
}




# Autoload methods go after =cut, and are processed by the autosplit program.

1;
__END__
# Below is stub documentation for your module. You'd better edit it!

=head1 NAME

UnicornEngine - Perl extension for blah blah blah

=head1 SYNOPSIS

  use UnicornEngine;
  blah blah blah

=head1 DESCRIPTION

Stub documentation for UnicornEngine, created by h2xs. It looks like the
author of the extension was negligent enough to leave the stub
unedited.

Blah blah blah.

=head2 EXPORT

None by default.

=head2 Exportable constants

  UC_ARCH_ARM
  UC_ARCH_ARM64
  UC_ARCH_M68K
  UC_ARCH_MAX
  UC_ARCH_MIPS
  UC_ARCH_PPC
  UC_ARCH_SPARC
  UC_ARCH_X86
  UC_ERR_ARCH
  UC_ERR_ARG
  UC_ERR_EXCEPTION
  UC_ERR_FETCH_PROT
  UC_ERR_FETCH_UNALIGNED
  UC_ERR_FETCH_UNMAPPED
  UC_ERR_HANDLE
  UC_ERR_HOOK
  UC_ERR_HOOK_EXIST
  UC_ERR_INSN_INVALID
  UC_ERR_MAP
  UC_ERR_MODE
  UC_ERR_NOMEM
  UC_ERR_OK
  UC_ERR_READ_PROT
  UC_ERR_READ_UNALIGNED
  UC_ERR_READ_UNMAPPED
  UC_ERR_RESOURCE
  UC_ERR_VERSION
  UC_ERR_WRITE_PROT
  UC_ERR_WRITE_UNALIGNED
  UC_ERR_WRITE_UNMAPPED
  UC_HOOK_BLOCK
  UC_HOOK_CODE
  UC_HOOK_INSN
  UC_HOOK_INTR
  UC_HOOK_MEM_FETCH
  UC_HOOK_MEM_FETCH_PROT
  UC_HOOK_MEM_FETCH_UNMAPPED
  UC_HOOK_MEM_READ
  UC_HOOK_MEM_READ_PROT
  UC_HOOK_MEM_READ_UNMAPPED
  UC_HOOK_MEM_WRITE
  UC_HOOK_MEM_WRITE_PROT
  UC_HOOK_MEM_WRITE_UNMAPPED
  UC_MEM_FETCH
  UC_MEM_FETCH_PROT
  UC_MEM_FETCH_UNMAPPED
  UC_MEM_READ
  UC_MEM_READ_PROT
  UC_MEM_READ_UNMAPPED
  UC_MEM_WRITE
  UC_MEM_WRITE_PROT
  UC_MEM_WRITE_UNMAPPED
  UC_MODE_16
  UC_MODE_32
  UC_MODE_64
  UC_MODE_ARM
  UC_MODE_BIG_ENDIAN
  UC_MODE_LITTLE_ENDIAN
  UC_MODE_MCLASS
  UC_MODE_MICRO
  UC_MODE_MIPS3
  UC_MODE_MIPS32
  UC_MODE_MIPS32R6
  UC_MODE_MIPS64
  UC_MODE_PPC32
  UC_MODE_PPC64
  UC_MODE_QPX
  UC_MODE_SPARC32
  UC_MODE_SPARC64
  UC_MODE_THUMB
  UC_MODE_V8
  UC_MODE_V9
  UC_PROT_ALL
  UC_PROT_EXEC
  UC_PROT_NONE
  UC_PROT_READ
  UC_PROT_WRITE
  UC_QUERY_MODE
  UC_QUERY_PAGE_SIZE



=head1 SEE ALSO

Mention other useful documentation such as the documentation of
related modules or operating system documentation (such as man pages
in UNIX), or any relevant external documentation such as RFCs or
standards.

If you have a mailing list set up for your module, mention it here.

If you have a web site set up for your module, mention it here.

=head1 AUTHOR

Vikas N. Kumar, E<lt>vikas@cpan.org<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2016 by Vikas N. Kumar

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.14.2 or,
at your option, any later version of Perl 5 you may have available.


=cut
