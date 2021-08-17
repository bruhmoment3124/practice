
print "width:\n";
$wid = <>;
print "length:\n";
$len = <>;

srand(time);
for($i=0; $i<$wid; $i++) { # y tiles
	$tile = 1 + int rand(2); # the character tile, can be # or .
	
	if($tile == 1) {
		print "#\n";
	} elsif($tile == 2) {
		print ".\n";
	}
	
	for($j=0; $j<$len; $j++) { # x tiles
		if($tile == 1) {
			print '#';
		} elsif($tile == 2) {
			print '.';
		}
	}
}