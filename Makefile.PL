use 5.010001;
use Config qw/%Config/;

die 'No support for OS' unless $^O =~ /linux/i;

use ExtUtils::MakeMaker;
use File::ShareDir::Install;
use Alien::UnicornEngine;

install_share 'share';
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
my $alien = Alien::UnicornEngine->new;
WriteMakefile(
    NAME              => 'UnicornEngine',
    VERSION_FROM      => 'lib/UnicornEngine.pm', # finds $VERSION
    LICENSE           => 'mit',
    PREREQ_PM         => {
        'Alien::UnicornEngine' => 0,
    }, # e.g., Module::Name => 1.1
    CONFIGURE_REQUIRES => {
      'ExtUtils::MakeMaker'     => 0,
      'File::ShareDir::Install' => 0,
    },
    BUILD_REQUIRES => {
        'Test::More'  => 0,
    },
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/UnicornEngine.pm', # retrieve abstract from module
       AUTHOR         => 'Vikas Kumar <vikas@cpan.org>') : ()),
    LIBS              => $alien->libs,
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => $alien->cflags, # e.g., '-I. -I/usr/include/other'
);

__END__
#### COPYRIGHT: Selective Intellect LLC
#### AUTHOR: Vikas N Kumar
