t=int(input())
for I in range(t):
    n,a,b=[int(i) for i in input().split()]
    a_0=0
    a_1=0
    b_0=0
    b_1=0
    for i in range(n):
        if(a%2==0):
            a_1+=1
        elif(a%2!=0):
            a_0+=1
        if(b%2==0):
            b_1+=1
        elif(b%2!=0):
            b_0+=1
        a>>=1
        b>>=1
    d=min(a_0,b_1)+min(a_1,b_0)
    e=n-d
    ans=0
    for i in range(e,n):
        ans+=(2**i)
    print(ans)
    
