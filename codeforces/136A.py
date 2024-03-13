n = int(input())
m = input().split()
l = []
for i in range(1, n+1):
	l.insert(int(m[i-1]), i)
print(l)