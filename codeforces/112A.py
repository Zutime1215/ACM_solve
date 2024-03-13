string_1 = input().lower()
string_2 = input().lower()
x=0
for i in range(len(string_1)):
	if ord(string_1[i]) == ord(string_2[i]): continue
	elif ord(string_1[i]) > ord(string_2[i]):
		x=1;
		break
	elif ord(string_1[i]) < ord(string_2[i]):
		x=-1;
		break
	else: x=0	

print(x)
#author - Sirens