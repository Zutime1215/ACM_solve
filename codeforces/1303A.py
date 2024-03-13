for t in range(int(input())):
	s = input()
	l = []
	summ = 0

	for i in range(len(s)):
		if s[i] == '1':
			l.append(i+1)
	for i in range(1, len(l)):
		summ += abs(l[i]-l[i-1])-1
	print(summ)