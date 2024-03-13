l = []
n = int(input())
for i in range(n):
	x = input()
	if x in l: print("YES")
	else: print("NO")	
	l.append(x)