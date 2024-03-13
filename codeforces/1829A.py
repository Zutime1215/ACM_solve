
main = 'codeforces'
for i in range(int(input())):
	x=0
	s = input()
	for j in range(10):
		if main[j]==s[j]:
			x+=1
	print(10-x)