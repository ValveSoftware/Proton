#! /usr/bin/env perl

use warnings;
use 5.005;
use strict;

my %option;
my %directive;
my $scanner = `grep -i '"%[a-z]' $ARGV[0]`;
$scanner =~ s/"\[-_\]"/-/g;
while (<STDIN>)
{
    if (/^\s*             # Initial spaces.
        (?:(-\w),\s+)?    # $1: $short: Possible short option.
        (--[-\w]+)        # $2: $long:  Long option.
        (\[?)             # $3: $opt:   '[' iff the argument is optional.
        (?:=(\S+))?       # $4: $arg:   Possible argument name.
        \s                # Spaces.
        /x)
    {
        my ($short, $long, $opt, $arg) = ($1, $2, $3, $4);
        $short = '' if ! defined $short;
        $short = '-d' if $long eq '--defines' && ! $short;
        my $dir = '%' . substr($long, 2);
        if (index ($scanner, "\"$dir\"") < 0)
        {
          if ($long eq '--force-define') { $dir = '%define'; }
          else { $dir = ''; }
        }
        if ($arg)
        {
            # if $opt, $arg contains the closing ].
            substr ($arg, -1) = ''
                if $opt eq '[';
            $arg =~ s/^=//;
            $arg = lc ($arg);
            my $dir_arg = $arg;
            # If the argument is compite (e.g., for --define[=NAME[=VALUE]]),
            # put each word in @var, to build @var{name}[=@var{value}], not
            # @var{name[=value]}].
            $arg =~ s/(\w+)/\@var{$1}/g;
            my $long_arg = "=$arg";
            if ($opt eq '[') {
              $long_arg = "[$long_arg]";
              $arg = "[$arg]";
            }
            # For arguments of directives: this only works if all arguments
            # are strings and have the same syntax as on the command line.
            if ($dir_arg eq 'name[=value]')
            {
                $dir_arg = '@var{name} ["@var{value}"]';
            }
            else
            {
                $dir_arg =~ s/(\w+)/\@var{"$1"}/g;
                $dir_arg = '[' . $dir_arg . ']'
                    if $opt eq '[';
            }
            $long = "$long$long_arg";
            $short = "$short $arg" if $short && $short ne '-d';
            $dir = "$dir $dir_arg" if $dir;
        }
        $option{$long} = $short;
        $directive{$long} = $dir;
    }
}

my $sep = '';
foreach my $long (sort keys %option)
{
    # Avoid trailing spaces.
    print $sep;
    $sep = "\n";
    print '@item @option{', $long, "}\n\@tab";
    print ' @option{', $option{$long}, '}' if $option{$long};
    print "\n\@tab";
    print ' @code{', $directive{$long}, '}' if $directive{$long};
    print "\n";
}
