echo "enter in number 1:"
read NUM1
echo "enter in number 2:"
read NUM2

if [ NUM1 > NUM2 ]
then
	echo "$NUM1 is greater than $NUM2"
else
	echo "$NUM1 is less than $NUM2"
fi 