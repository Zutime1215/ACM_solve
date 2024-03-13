s = input()
l = set()
for i in s:
	if ord(i)>96 and ord(i)<123: l.add(i)
print(len(l))