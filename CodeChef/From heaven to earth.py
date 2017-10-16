from math import sqrt
t=int(input())
for i in range(t):
    n,v1,v2=map(int,input().split(" "))
    a=((sqrt(2)*n)/v1)
    b=((2*n)/v2)
    #print('a',a)
    #print('b',b)
    if(a>=b):
        print('Elevator')
    else:
        print('Stairs')
