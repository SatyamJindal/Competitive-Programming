from math import floor
from math import sqrt
n1=100005
sieve=[i for i in range(n1)]
for i in range(2,1005):
    if(sieve[i]==i):
        for g in range(2*i,n1,i):
            sieve[g]=min(sieve[i],sieve[g])
def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split(" ")]
    gcd1=a[0]
    for j in range(1,len(a)):
        gcd1=gcd(a[j],gcd1)
    if(gcd1==1):
        print(-1)
    else:
        prime=gcd1
        '''for j in range(2,floor(sqrt(gcd1))+1):
            if(gcd1%j==0):
                prime=j
                break'''
        print(sieve[gcd1])
