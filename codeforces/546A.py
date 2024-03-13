in_put = input().split()
a = 0

for i in range(1, int(in_put[-1])+1 ):
	a = a + int(in_put[0])*i

if a > int(in_put[1]):	
	print(a - int(in_put[1]))
else:
	print(0)
# author - Sirens