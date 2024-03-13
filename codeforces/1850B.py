for j in range(int(input())):
	x = 0
	y = 0
	for i in range(int(input())):
		n = list(map(int, input().split()))
		if n[0]<=10 and n[1] > y:
			x = i+1
			y = n[1]
	print(x)