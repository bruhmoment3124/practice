program main;

{$mode ISO}

var
	i, k: integer;
	str: packed array [1..7] of char;
	palin: boolean;
	
begin
	str := 'racecar';
	for i := 1 to 7 do
	begin
		for k := 7 downto 1 do
		begin
			(* check if each character is the same *)
			if str[i] = str[k] then
				palin := true
			else
				palin := false;
		end;
	end;
	
	(* print if the string is a palindrome *)
	if palin = true then
		writeln(str, ' is a palindrome')
	else
		writeln(str, ' is not a palindrome');
	
	readln;
end.