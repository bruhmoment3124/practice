program main;

{$mode ISO}

var
	i, k: integer;
	mat: array [1..5, 1..5] of integer; (* matrix *)

begin
	for i := 1 to 5 do
	begin
		for k := 1 to 5 do
		begin
			mat[k][i] := k*i; (* multiply the elements *)
			write(mat[k][i], ' ');
		end;
		writeln; (* newline *)
	end;
	readln();
end.