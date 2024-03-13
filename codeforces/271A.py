prev_year = int(input())
year = prev_year
while True:
	l = []
	year += 1
	for i in str(year):
		l.append(i)
	if len(set(l)) == len(str(year)): 
		break
print(int(year))