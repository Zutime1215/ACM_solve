def main():
	n = int(input())
	s = input()[::-1]
	cursor = 0
	decode = []

	while True:
		if cursor > n-1: break
		if s[cursor] == '0':
			decode.append(chr(96+int(s[cursor+2] + s[cursor+1])))
			cursor += 3
		else:
			decode.append(chr(96+int(s[cursor])))
			cursor+=1

	for i in decode[::-1]: print(i, end="")
	print()

for t in range(int(input())):
	main()