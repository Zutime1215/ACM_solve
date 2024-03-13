n = int(input())
mishika = 0
chris = 0

for i in range(n):
	m = input().split()
	if int(m[0]) > int(m[1]):
		mishika += 1
	elif int(m[1]) > int(m[0]):
		chris += 1
if mishika>chris:
	print('Mishka')
elif chris>mishika:
	print('Chris')
else:
	print('Friendship is magic!^^')					