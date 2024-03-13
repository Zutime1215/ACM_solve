tbl = input()
hnd = input().split()
x = 1
for i in hnd:
	if i[-1] == tbl[-1]:
		print("YES")
		x = 0
		break
	elif i[0] == tbl[0]:
		print("YES")
		x = 0
		break
if x: print("NO")