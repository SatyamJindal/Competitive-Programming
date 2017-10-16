t=int(input())
def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    counter=a[0]
    for i in range(1,len(a)):
        counter=gcd(a[i],counter)
    print(counter)
