x = int(input())
y = int(input())
z = int(input())
l = sorted([x+y*z, (x+y)*z, x*(y+z), x*y*z, x+y+z])
print(l[-1])