n = input()
num = set(list(map(int, input().split())))
num = sorted(num)
if len(num)<2:
	print("NO")
else:	
	print(num[1])