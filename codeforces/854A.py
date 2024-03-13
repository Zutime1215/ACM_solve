def divisor(m):
	l = []
	for i in range(2,(m//2)+2):
		if m%i==0:
			l.append(i)	
	return [len(l), l]

n = int(input())
if n%2!=0:
	a = (n//2)
	b = n-a
else:
	a = (n//2)-1
	b = n-a

while True:
	a_l = divisor(a)
	b_l = divisor(b)
	if a_l[0]+b_l[0] == len(set(a_l[-1]+b_l[-1])):
		break
	else:
		a-=1
		b+=1
print(a, b)		 