t=int(input())
def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split(" ")]
    dp=[1]*n
    for j in range(1,n):
        for g in range(j-1,-1,-1):
            if(gcd(a[j],a[g])>1):
                dp[j]=max(dp[j],dp[g]+1)
    #print(dp)
    print(max(dp))
                
                
