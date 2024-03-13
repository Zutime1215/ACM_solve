n = int(input())
x = ''
for i in range(n):
	m = input()
	x += m

print(len(x.split('11'))+len(x.split('00'))-1)