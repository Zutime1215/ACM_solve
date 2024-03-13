n = input()

if '-' not in n:
	print(n)
else:
	a = int(n[0:-1])
	b = int(n[:len(n)-2] + n[len(n)-2 + 1:])
	if a>b:
		print(a)
	else:
		print(b)