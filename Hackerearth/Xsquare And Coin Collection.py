t=int(input())
for I in range(t):
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    max1=0
    dp=[0]*(n+1)
    for i in range(1,n+1):
        if(a[i-1]<=k):
            dp[i]=dp[i-1]+a[i-1]
        max1=max(max1,dp[i])
    print(max1)
