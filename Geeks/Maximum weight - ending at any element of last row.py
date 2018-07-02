t=int(input())
for I in range(t):
    n=int(input())
    a=[]
    for i in range(n):
        b=[int(i) for i in input().split()]
        a.append(b)
    dp=[[0 for i in range(n)] for i in range(n)]
    dp[0][0]=a[0][0]
    for i in range(1,n):
        dp[i][0]=dp[i-1][0]+a[i][0]
    for i in range(1,n):
        for j in range(1,n):
            dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j])
    res=0
    for i in range(n):
        res = max(res,dp[n-1][i])
    print(res)
