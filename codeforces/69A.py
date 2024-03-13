num = int(input())
l = []
for i in range(num):
	l.append(input().split())

x = 0
y = 0
z = 0
for i in range(num):
	x += int(l[i][0])
	y += int(l[i][1])
	z += int(l[i][2])

if x == 0 and y == 0 and z == 0:
	print('YES')
else:
	print('NO')
# author - Sirens	