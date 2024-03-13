n = input().split()

a = int(n[0])
b = int(n[1])

if a%2 == 0 and b <= a//2:
	print(2*b - 1)
elif a%2 == 0 and b > a//2:
	print( 2*(b-(a//2)) )
elif a%2 != 0 and b <= (a+1)//2:
	print(2*b - 1)
else:
	print( 2*(b-((a+2)//2)) )