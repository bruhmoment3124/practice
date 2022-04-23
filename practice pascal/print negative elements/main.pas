program main;

{$mode ISO}

var
	i, k: integer;
	arr: array [1..5] of integer;

begin
	for i := -3 to 1 do
	begin
		arr[i+3] := i; (* assign numbers to array -3 to 1 *)
 	
		if arr[i+3] < 0 then (* only print if they are negative *)
			writeln(arr[i+3]);
	end;
	readln();
end.