n = int(input()) 
c = sorted(set(input().split()) | set(input().split()))
if '0' in c:
	c.remove('0')
if len(c) == n:
	print('I become the guy.')
else:	
	print('Oh, my keyboard!')