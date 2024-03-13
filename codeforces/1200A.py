n = int(input())
s = input()
room = list("0000000000")

def left():
	for j in range(10):
		if room[j]=="0":
			room[j]='1'
			break
def right():
	for j in range(-1, -11, -1):
		if room[j]=="0":
			room[j]='1'
			break

for i in s:
	if ord(i) < 58:
		t = int(i)
		room[t] = '0'
	elif i=="L":
		left()
	elif i=="R":
		right()

print("".join(room))