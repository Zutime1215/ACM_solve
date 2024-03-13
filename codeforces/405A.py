n = int(input())
m = input().split()
x = ''
for i in range(n):
	m[i] = int(m[i])
for i in sorted(m):
	x += str(i)+' '
print(x)