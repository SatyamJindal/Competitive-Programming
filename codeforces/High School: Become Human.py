from math import log

x,y=[int(i) for i in input().split()]

lhs = y*log(x)
rhs = x*log(y)

if(lhs==rhs):
    print('=')
elif(lhs>rhs):
    print('>')
elif(rhs>lhs):
    print('<')
