
sub cube {
	$num = $_[0];
	return $num ** 3; # cube of the number
}

print "enter a number:\n";
$num = <>;
print "cube of number: ", cube($num), "\n";