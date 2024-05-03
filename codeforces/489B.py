n = int(input())
a = sorted(list(map(int, input().split())))
m = int(input())
b = sorted(list(map(int, input().split())))

ans = 0
for i in range(n):
	for j in range(m):
		if b[j] == -1: continue
		if abs(a[i]-b[j]) <= 1:
			ans+=1
			b[j] = -1
			# print(b)
			break

print(ans)