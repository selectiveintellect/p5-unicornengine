package UnicornEngine;
use 5.010001;
use strict;
use warnings;

require Exporter;
use Autoloader qw(AUTOLOAD);

our @ISA = qw(Exporter);

our %EXPORT_TAGS = ('all' => []);
our @EXPORT_OK = (@{ $EXPORT_TAGS{'all'} });
our @EXPORT = qw();
our $VERSION = '0.01';

require XSLoader;
XSLoader::load('UnicornEngine', $VERSION);

sub new {
    my $self = shift;
    my $class = ref($self) || $self;
    my %args = @_;
    my $this  = bless({%args}, $class);

    return $this;
}
