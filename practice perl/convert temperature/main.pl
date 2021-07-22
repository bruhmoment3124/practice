
print "which would you like to convert:\n";
print "(c/f)\n";
$system = <>; # temperature system

print "what temperature:\n";
$temp = <>; # temperature

if($system == 'c') {
	$fah = ($temp - 32) * 5/9; # convert to fahrenheit
	print "fahrenheit: $fah\n";
} elsif($system == 'f') {
	$cel = (($temp-32) * 5) / 9; # convert to celcius
	print "celcius: $cel\n";
}