--random maze--
math.randomseed(os.time()) --generate random number

for i=0, 50 do
	tile1 = math.random(2) --generate random tile
	if tile1 == 1 then print('.') end
	if tile1 == 2 then print('#') end
	for j=0, 50 do
		tile2 = math.random(2) --generate random tile
		if tile2 == 1 then io.write('.') end
		if tile2 == 2 then io.write('#') end
	end
end