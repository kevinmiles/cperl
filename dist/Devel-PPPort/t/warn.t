################################################################################
#
#            !!!!!   Do NOT edit this file directly!   !!!!!
#
#            Edit mktests.PL and/or parts/inc/warn instead.
#
#  This file was automatically generated from the definition files in the
#  parts/inc/ subdirectory by mktests.PL. To learn more about how all this
#  works, please read the F<HACKERS> file that came with this distribution.
#
################################################################################

BEGIN {
  if ($ENV{'PERL_CORE'}) {
    chdir 't' if -d 't';
    if (-d '../lib' && -d '../dist/Devel-PPPort') {
      @INC = ('../lib', '../dist/Devel-PPPort/t');
    } elsif (-d '../../../lib' && -d '../../../dist/Devel-PPPort') {
      @INC = ('../../../lib', '.');
    }
    require Config; import Config;
    use vars '%Config';
    if (" $Config{'extensions'} " !~ m[ Devel/PPPort ]) {
      print "1..0 # Skip -- Perl configured without Devel::PPPort module\n";
      exit 0;
    }
  }
  else {
    unshift @INC, 't';
  }

  sub load {
    require 'testutil.pl';
  }

  if (5) {
    load();
    plan(tests => 5);
  }
}

use Devel::PPPort;
use strict;
$^W = 1;

package Devel::PPPort;
use vars '@ISA';
require DynaLoader;
@ISA = qw(DynaLoader);
bootstrap Devel::PPPort;

package main;

$^W = 0;

my $warning;

$SIG{'__WARN__'} = sub { $warning = $_[0] };

$warning = '';
Devel::PPPort::warner();
ok("$]" >= 5.004 ? $warning =~ /^warner bar:42/ : $warning eq '');

$warning = '';
Devel::PPPort::Perl_warner();
ok("$]" >= 5.004 ? $warning =~ /^Perl_warner bar:42/ : $warning eq '');

$warning = '';
Devel::PPPort::Perl_warner_nocontext();
ok("$]" >= 5.004 ? $warning =~ /^Perl_warner_nocontext bar:42/ : $warning eq '');

$warning = '';
Devel::PPPort::ckWARN();
ok($warning, '');

$^W = 1;

$warning = '';
Devel::PPPort::ckWARN();
ok("$]" >= 5.004 ? $warning =~ /^ckWARN bar:42/ : $warning eq '');

