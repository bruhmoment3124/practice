
print "enter string 1:\n";
$str1 = <>;
print "enter string 2:\n";
$str2 = <>;

$ret = $str1 cmp $str2; # compare the 2 strings

if($ret == 1) {
		print "the strings are different\n"
} elsif($ret == -1) {
		print "the strings are different\n"
} elsif($ret == 0) {
		print "the strings are the same\n";
}