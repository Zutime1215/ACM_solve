in_put = input().split()	
a = int(in_put[0])
b = int(in_put[1])

for i in range(b):
	if a%10 == 0:
		a = a/10
	else:
		a = a-1
print(int(a))
# author - Sirens