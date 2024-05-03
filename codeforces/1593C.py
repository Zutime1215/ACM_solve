for t in range(int(input())):
	n, k = map(int, input().split())
	x = sorted(list(map(int, input().split())), reverse=True)

	step = 0
	mouse = 0
	for i in range(k):
		if step >= x[i]:
			break
		else:
			step+=(n-x[i])
			mouse+=1
	print(mouse)