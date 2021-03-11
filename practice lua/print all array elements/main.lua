a = {} --array

--scan for input
print("enter 5 array elements:")
for i=1, 5 do
	a[i] = io.read("*n")
end

--print array
print("array:")
for j in ipairs(a) do
	print(a[j])
end