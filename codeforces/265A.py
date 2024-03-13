s = input()
t = input()
x = 1
for i in range(len(t)):
	if s[x-1]==t[i]:
		x+=1
print(x)		