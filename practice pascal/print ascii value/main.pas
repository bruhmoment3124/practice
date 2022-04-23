program main;

{$mode ISO}

var
	chr: char;

begin
	writeln('enter a character:');
	readln(chr);
	writeln('ascii value of ', chr, ':');
	writeln(ord(chr));
	readln();
end.