n = int(input())
m = input().split()
x = 0
for i in range(n):
	x += int(m[i])

if x > 0:
	print('HARD')
else:
	print('EASY')	