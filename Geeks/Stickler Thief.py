t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    dp=[0]*(n)
    dp[0]=a[0]
    dp[1]=max(a[0],a[1])
    for i in range(2,n):
        dp[i]=max(a[i]+dp[i-2],dp[i-1])
    print(dp[n-1])
