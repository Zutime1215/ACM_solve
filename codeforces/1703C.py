for i in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	b = []
	for j in range(n):
		x=0
		s = input().split()[-1]
		for i in s:
			if i=="D": x+=1
			else: x-=1
		b.append(x+a[j])

	for j in b:
		if j>9: print(j-10, end=" ")
		elif j<0: print(j+10, end=" ")
		else: print(j, end=" ")