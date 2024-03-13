l = []
for i in range(int(input())):
	o = []
	for j in range(8):
		for k in input():
			if k!='.':
				o.append(k)
	l.append(o)

for i in l:
	for j in i:
		print(j, end="")
	print("\n")