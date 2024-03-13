lst = []
num = int(input())
 
for x in range(num):
	word = input()
	lst.append(word)	
 
j = 0
for i in lst:
	if int(i[0]) + int(i[2]) + int(i[4]) > 1:
		j +=1

print(j)
# author - Sirens