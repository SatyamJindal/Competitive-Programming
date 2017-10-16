t=int(input())
for I in range(t):
    n,b=map(int,input().split(" "))
    if(n//b==1):
        print(n-b)
    else:
        max1=(n-1)//b
        a=((n-b)//2)
        if(a==0):
            a=2
        for i in range(a,(n-b//2)):
            c=(((n-i)//b)*i)
            if(c>max1):
                max1=c
        print(max1)
        
        
