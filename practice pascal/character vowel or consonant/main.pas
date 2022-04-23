program main;

var
	letter: char;

begin
	writeln('enter a character: ');
	readln(letter);

	case (letter) of
		'a', 'e', 'i', 'o', 'u': writeln(letter, ' is a vowel'); (* lower case *)
		'A', 'E', 'I', 'O', 'U': writeln(letter, ' is a vowel'); (* upper case *)
	end;
	
	writeln(letter, ' is a consonant');
	readln();
end.