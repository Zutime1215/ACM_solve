lst = []
in_put = int(input())
 
for i in range(in_put):
	word = input()
	lst.append(word)
 
x = 0
for i in lst:
	if "++" in i:
		x += 1
	else:
		x -= 1
print(x)