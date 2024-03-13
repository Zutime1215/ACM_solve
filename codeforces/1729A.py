for i in range(int(input())):
	n = list(map(int, input().split()))
	a = n[0]-1
	b = abs(n[2]-n[1]) + n[2]-1
	if a<b: print(1)
	elif b<a: print(2)
	else: print(3)