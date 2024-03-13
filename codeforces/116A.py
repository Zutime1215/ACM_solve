num = int(input())

x = 0
out = 0
for i in range(num):
	strn = input().split()
	a = int(strn[0])
	b = int(strn[1])
	x -= a
	x += b
	if x > out:
		out = x
print(out)
# author - Sirens