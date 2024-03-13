for t in range(int(input())):
	ok = "two"
	summ = 0
	n = input()
	a = list(map(int, input().split()))
	for i in a:
		summ += i
	
	if summ%3 == 0:
		print(0)
		continue
	elif summ%3 == 2:
		print(1)
		continue
	else:
		for i in a:
			if i%3 == 1:
				ok = "one"
				break
	
	if ok == "one":
		print(1)
	else:
		print(2)
