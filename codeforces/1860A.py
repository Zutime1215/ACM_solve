num = int(input())
l = []
for i in range(num):
	strn = input()

	case1 = '(' * len(strn) + ')' * len(strn)
	case2 = '()' * len(strn)

	if strn in case1 and strn in case2:
		l.append('NO')
	elif strn not in case1:
		l.append('YES')
		l.append(case1)
	elif strn not in case2:
		l.append('YES')
		l.append(case2)

for i in l:
	print(i)