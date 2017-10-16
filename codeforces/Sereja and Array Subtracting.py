t=int(input())
def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    if(n==1):
        print(a[0])
    else:
        counter=a[0]
        for g in range(1,len(a)):
            counter=gcd(a[g],counter)
        print(counter*n)
