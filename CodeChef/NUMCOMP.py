from math import log
t=int(input())
for I in range(t):
    a,b,n=[int(i) for i in input().split()]
    if(a==b):
        print(0)
    elif(n%2==0):
        if(abs(a)==abs(b)):
            print(0)
        else:
            if(abs(a)>abs(b)):
                print(1)
            else:
                print(2)
    else:
        if(a>b):
            print(1)
        else:
            print(2)
            
            
        
        
