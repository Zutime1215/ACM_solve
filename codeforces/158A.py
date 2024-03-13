first_input = input()
second_input = input()

first_arr = first_input.split()
score_participants = second_input.split()

kth_mini_number = int(first_arr[1])

x = 0
for i in score_participants:
	if int(i) <= 0:
		continue
	if int(i) >= int(score_participants[kth_mini_number - 1]):
		x += 1
	else:
		break
print(x)
# author - Sirens