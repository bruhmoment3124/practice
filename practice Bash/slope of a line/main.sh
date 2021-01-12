echo "x1:"
read x1
echo "y1:"
read y1
echo "x2:"
read x2
echo "y2:"
read y2
p1=$(($x2 - $x1))
p2=$(($y2 - $y1))
sum=$(($p2 / $p1))
echo "slope: $sum"