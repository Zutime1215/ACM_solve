t = int(input())

for i in range(t):
	m = input().split()
	a = int(m[0])
	b = int(m[1])
	if a%b == 0:	
		print(0)
	elif a < b:
		print(b-a)
	else:
		print(b-(a%b))	