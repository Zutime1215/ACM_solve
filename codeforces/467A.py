n = int(input())
l = []
ll = []
for i in range(n):
	m = input().split()
	l.append(m)

for i in l:
	if int(i[1]) - int(i[0]) > 1:
		ll.append('1')

print(len(ll))			