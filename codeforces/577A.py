import math
a = list(map(int, input().split()))
x = 0

for i in range(2, math.ceil(a[1]/2)+1):
	if a[1]%i==0 and i<=a[0]:
		x+=1
if a[1]==1:
	print(1)
elif a[1]<=a[0]:
	print(x+2)
else:
	print(x)