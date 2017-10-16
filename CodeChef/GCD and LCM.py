def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
t=int(input())
for I in range(t):
    a,b=map(int,input().split(" "))
    c=gcd(a,b)
    d=(a*b)//c
    print(c,end=' ')
    print(d)
    
