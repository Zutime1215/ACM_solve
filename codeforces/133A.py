strng = input()
l = ['H', 'Q', '9']

for i in strng:
	if i in l:
		print('YES')
		exit()		
print('NO')