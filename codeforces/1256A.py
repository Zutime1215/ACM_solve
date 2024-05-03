for t in range(int(input())):
	a, b, n, s = map(int, input().split())
	if b < s%n:
		print("NO")
	else:
		if s/n > a:
			if (s-a*n) > b:
				print("NO")
			else:
				print("YES")
		else:
			print("YES")