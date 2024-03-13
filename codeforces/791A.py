in_put = input().split()
x = 0
a = int(in_put[0])
b = int(in_put[1])

while True:
	a = 3*a
	b = 2*b
	x += 1
	if a > b:
		break
	else:
		continue		
print(x)
# author - Sirens