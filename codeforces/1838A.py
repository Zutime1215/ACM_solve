t = int(input())

while t>0:
	n = input()
	a = input().split()
	a = sorted([eval(i) for i in a])

	if a[0] < 0:
		print(a[0])
	else:
		print(a[-1])
	t -= 1