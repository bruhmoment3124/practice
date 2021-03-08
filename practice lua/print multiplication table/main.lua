print("enter a number:")
num = io.read("*n") --read number

print("multiplication table:")
for i=1, 11 do
	io.write(num * i, " ") --print table
end
print("\n") --end line