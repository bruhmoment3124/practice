program main;

{$mode ISO}

var
	i, k: integer;
	arr: array [1..5] of integer;

begin
	for i := -3 to 1 do
	begin
		arr[i] := i; (* assign numbers to array -3 to 1 *)
 	
		if arr[i] < 0 then (* only print if they are negative *)
			writeln(arr[i]);
	end;
	readln();
end.