import math as m
a,b,x,y=[int(i) for i in input().split()]
gc = m.gcd(x,y)
x//=gc
y//=gc
print(min(a//x,b//y))
