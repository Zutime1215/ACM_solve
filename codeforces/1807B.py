for i in range(int(input())):
	n = int(input())
	s = list(map(int, input().split()))
	odd = 0
	even = 0
	for j in s:
		if j%2==0: even+=j
		else: odd+=j
	if even>odd: print("YES")
	else: print("NO")
