import math
 
inp = input()
x = inp.split()
 
ans = math.ceil(int(x[0])/int(x[2])) * math.ceil(int(x[1])/int(x[2]))
print(ans)
# author - Sirens