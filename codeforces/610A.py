n = int(input())
if n<6 or n%2!=0:
	print(0)
elif ( (n//2)%2 != 0 ):
	print( (n//2)//2 )
else:
	print((n//2 - 1)//2)