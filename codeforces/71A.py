lst = []
num = int(input())
 
for x in range(num):
	word = input()
	lst.append(word)
 
for x in lst:
	if len(x) > 10:
		print( x[0] + str(len(x)-2) + x[-1] )	
	else:
		print(x)
# author - Sirens		