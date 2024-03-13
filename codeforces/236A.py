def distincter(word):
	l = []
	for i in word:
		if i in l:
			continue
		else:
			l.append(i)
	return l		

strg = distincter(input())
if len(strg)%2 == 0:
	print('CHAT WITH HER!')
else:
	print('IGNORE HIM!')
# author - Sirens	