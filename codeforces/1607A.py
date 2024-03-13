t = int(input())
for i in range(t):
	x = 0
	seq = input()
	word = input()
	for j in range(1, len(word)):
		x += abs( seq.index( word[j] ) - seq.index( word[j-1] ) )

	print(x)