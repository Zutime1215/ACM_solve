def main():
	diction = {}
	s = input()
	for i in s:
		if i in diction: diction[i] += 1
		else: diction[i] = 1

	if len(diction) == 1:
		print("NO")
	elif len(diction) == 2:
		x = 1
		for i in diction.values():
			if i == 1:
				x=0
				break
		if x: print("YES")
		else: print("NO")
	else:
		print("YES")

for t in range(int(input())):
	main()