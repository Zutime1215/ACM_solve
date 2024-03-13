num_stone = int(input())
decor = input()
old_decor = decor

while True:
	if 'RR' in decor:
		decor = decor.replace('RR', 'R')
	if 'GG' in decor:
		decor = decor.replace('GG', 'G')
	if 'BB' in decor:
		decor = decor.replace('BB', 'B')
	if 'RR' not in decor and 'BB' not in decor and 'GG' not in decor:
		break
print( len(old_decor) - len(decor) )
# author - Sirens