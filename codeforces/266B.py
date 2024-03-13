num = input().split()
strn = input()

n = int(num[0])
t = int(num[1])

for i in range(t):
	strn = strn.replace('BG', 'GB')

print(strn)
# author - Sirens