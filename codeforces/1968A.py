import math
 
for t in range(int(input())):
	dict = {}
	x = int(input())
	for i in range(1, x):
		dict[i] = math.gcd(x, i) + i
 
	l = sorted(dict.items(), key=lambda x:x[1], reverse=True)
	print(l[0][0])
