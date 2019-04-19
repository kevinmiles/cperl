################################################################################
#
#            !!!!!   Do NOT edit this file directly!   !!!!!
#
#            Edit mktests.PL and/or parts/inc/uv instead.
#
#  This file was automatically generated from the definition files in the
#  parts/inc/ subdirectory by mktests.PL. To learn more about how all this
#  works, please read the F<HACKERS> file that came with this distribution.
#
################################################################################

BEGIN {
  if ($ENV{'PERL_CORE'}) {
    chdir 't' if -d 't';
    @INC = ('../lib', '../ext/Devel-PPPort/t') if -d '../lib' && -d '../ext';
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
    eval "use Test";
    require 'testutil.pl' if $@;
  }

  if (17) {
    load();
    plan(tests => 17);
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

ok(&Devel::PPPort::sv_setuv(42), 42);
ok(&Devel::PPPort::newSVuv(123), 123);
ok(&Devel::PPPort::sv_2uv("4711"), 4711);
ok(&Devel::PPPort::sv_2uv("1735928559"), 1735928559);
ok(&Devel::PPPort::SvUVx("1735928559"), 1735928559);
ok(&Devel::PPPort::SvUVx(1735928559), 1735928559);
ok(&Devel::PPPort::SvUVx(0xdeadbeef), 0xdeadbeef);
ok(&Devel::PPPort::XSRETURN_UV(), 42);
ok(&Devel::PPPort::PUSHu(), 42);
ok(&Devel::PPPort::XPUSHu(), 43);
ok(&Devel::PPPort::UTF8_SAFE_SKIP("A", 0), 1);
ok(&Devel::PPPort::UTF8_SAFE_SKIP("A", -1), 0);
ok(&Devel::PPPort::my_strnlen("abc\0def", 7), 3);
my $ret = &Devel::PPPort::utf8_to_uvchr_buf("A");
ok($ret->[0], ord("A"));
ok($ret->[1], 1);
$ret = &Devel::PPPort::utf8_to_uvchr_buf("\0");
ok($ret->[0], 0);
ok($ret->[1], 1);

