''' Find the roots of the equstion using the equation n*n+1//2=x. Now fond n
and solve for the quadratic equation an find n. Take into account the
approximations so check for n-1,n and n+1'''
from math import sqrt
t=int(input())
for i in range(t):
    n,m=map(int,input().split(" "))
    p=((n)*(n+1))//2
    if(m>p):
        print('-1')
    else:
        g=int((sqrt(8*m+1)-1)//2)
        g1=((g)*(g+1))//2
        k=((g-1)*(g))//2
        d=((g+1)*(g+2))//2
        if(m<=k):
            print(g-1)
        elif(m>k and m<=g1):
            print(g)
        elif(m>g1 and m<=d):
            print(g+1)
