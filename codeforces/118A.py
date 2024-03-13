strn = input().lower()
vowels = ["a", "o", "y", "e", "u", "i"]

for i in vowels:
	strn = strn.replace(i, "")

x = ''
for i in strn:
	x = x + '.' + i
print(x)
# author - Sirens