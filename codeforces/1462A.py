for t in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	for i in range(1, n+1):
		print( a[(i//2)*(-1)**(i-1)], end=" " )
	print("")