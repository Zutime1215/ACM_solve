for t in range(int(input())):
	summ = 0
	n = input()
	a = map(int, input().split())
	for i in a:
		summ += abs(i)
	print(summ)