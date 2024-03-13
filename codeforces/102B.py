def summer(n):
	x = 0
	for i in n:
		x += int(i)
	n = str(x)
y = 0
n = input()
while True:
	if len(n) == 1: break
	else:
		summer(n)
		y += 1

print(y)