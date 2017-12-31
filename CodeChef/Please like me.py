from math import log
t=int(input())
'''def expo(x,y):
    curr=x
    fin=1
    while(y):
        if(y&1):
            fin*=curr
        curr*=curr
        y>>=1
    return fin'''
for I in range(t):
    l,d,s,c=[int(i) for i in input().split()]
    if((d-1)*log(c+1,2)>=log(l,2)-log(s,2)):
        print('ALIVE AND KICKING')
    else:
        print('DEAD AND ROTTING')
        
                                              
    

