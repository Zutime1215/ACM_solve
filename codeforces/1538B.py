for i in range(int(input())):
	n = int(input())
	can = list(map(int, input().split()))
	total = 0
	x = 0
	for j in can:
		total+=j
	if total%n!=0: print(-1)
	else:
		for j in can:
			if j > total/n:
				x+=1
		print(x)