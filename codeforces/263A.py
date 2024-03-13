def diff(p):
	if p > 2:
		return p-2
	else:
		return 2-p

lst = []
pos_of_one = []

for i in range(5):
	word = input().split()
	lst.append(word)
	for j in range(5):
		if word[j] == '1':
			pos_of_one.append(i)
			pos_of_one.append(j)

print( diff( int(pos_of_one[0]) ) + diff( int(pos_of_one[1]) ) )
# author - Sirens