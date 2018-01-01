from math import floor as fl
from math import log
a1=[1]*31
for i in range(1,31):
    a1[i]=a1[i-1]*2
t=int(input())
for I in range(t):
    a,b=[int(i) for i in input().split()]
    lev1=fl(log(a,2))
    lev2=fl(log(b,2))
    mid1=(((3*a1[lev1])-1))//2
    mid2=((3*a1[lev2])-1)//2
    if(a==b):
        print(0)
    elif(lev1==0):
        print(lev2)
    elif(lev2==0):
        print(lev1)
    elif((lev1>=lev2 or lev2>=lev1) and ((a<(mid1+1) and (b>mid2)) or (b<mid2+1 and a>mid1))):
        print(lev1+lev2)
    else:
        count=0
        while(a!=b):
            if(a>b):
                a//=2
                count+=1
            else:
                b//=2
                count+=1
        print(count)
    
        
    
    
