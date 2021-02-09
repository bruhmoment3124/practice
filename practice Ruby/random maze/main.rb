#!/usr/bin/ruby
  
i = 0, j = 0, tile = 0
for i in 0..25
	tile = rand(2)
	if tile == 0 then puts "." end
	if tile == 1 then puts "^" end
	
	for j in 0..50
		tile = rand(2)
		if tile == 0 then print "." end
		if tile == 1 then print "^" end
	end
end