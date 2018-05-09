#

package IO;

use XSLoader ();
use strict;
use warnings;

our $VERSION = "1.41_02";
our $XS_VERSION = $VERSION;
$VERSION = eval $VERSION;
XSLoader::load 'IO', $XS_VERSION;

sub import {
    shift;

    warnings::warnif('deprecated', qq{Parameterless "use IO" deprecated})
        if @_ == 0 ;
    
    my @l = @_ ? @_ : qw(Handle Seekable File Pipe Socket Dir);

    local @INC = @INC;
    pop @INC if $INC[-1] eq '.';
    eval join("", map { "require IO::" . (/(\w+)/)[0] . ";\n" } @l)
	or do { require Carp; Carp::croak($@); };
}

1;

__END__

=head1 NAME

IO - load various IO modules

=head1 SYNOPSIS

   use IO qw(Handle File); # loads IO modules, here IO::Handle, IO::File
   use IO;                 # DEPRECATED

=head1 DESCRIPTION

C<IO> provides a simple mechanism to load several of the IO modules
in one go.  The IO modules belonging to the core are:

      IO::Handle
      IO::Seekable
      IO::File
      IO::Pipe
      IO::Socket
      IO::Dir
      IO::Select
      IO::Poll

Some other IO modules don't belong to the perl core but can be loaded
as well if they have been installed from CPAN.  You can discover which
ones exist by searching for "^IO::" on L<http://search.cpan.org>.

For more information on any of these modules, please see its respective
documentation.

=head1 DEPRECATED

    use IO;                # loads all the modules listed below

The loaded modules are IO::Handle, IO::Seekable, IO::File, IO::Pipe,
IO::Socket, IO::Dir.  You should instead explicitly import the IO
modules you want.

=cut

