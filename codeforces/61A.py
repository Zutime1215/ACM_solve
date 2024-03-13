a = input()
b = input()
x = ''
for i in range(len(a)):
	if int(a[i]) + int(b[i]) > 1:
		x += '0'
	else:
		x += str(int(a[i]) + int(b[i]))
print(x)