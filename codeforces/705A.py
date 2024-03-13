n = int(input())
x = ''
for i in range(n):
	if x == '':
		x += 'I hate'
	elif i%2 == 0:
		x += ' that I hate'
	else:
		x += ' that I love'

print(x+' it')				