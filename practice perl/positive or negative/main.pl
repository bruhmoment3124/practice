
print "enter a number:\n";
$number = <>;

if($number < 0) { # less than 0
	print "$number is negative\n";
} elsif($number > 0) { # greater than zero
	print "$number is positive\n";
} elsif($number == 0) { # zero
	print "$number equals zero";
}