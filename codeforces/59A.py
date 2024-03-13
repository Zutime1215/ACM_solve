strn = input()
sm = 0
bg = 0
for i in strn:
	if ord(i) >= 97:
		sm += 1
	else:
		bg += 1

if bg == sm:
	print(strn.lower())
elif bg > sm:
	print(strn.upper())
else:
	print(strn.lower())
# author - Sirens	