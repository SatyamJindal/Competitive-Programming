def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
t=int(input())
for I in range(t):
    a=list(map(int,input().split(" ")))
    result=a[1]
    for i in range(2,len(a)):
        result=gcd(a[i],result)
    for i in range(1,len(a)):
        print(a[i]//result,end=' ')
    print()
    
