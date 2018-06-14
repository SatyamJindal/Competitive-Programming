t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    dp=[0]*(n)
    dp[n-1]=a[n-1]
    ans=dp[n-1]
    for i in range(n-2,-1,-1):
        x=a[i]
        mx=0
        dp[i]=a[i]
        for j in range(i+1,n):
            if(a[j]>x):
                mx=max(mx,dp[j])
        dp[i]+=mx
        ans=max(ans,dp[i])
    print(ans)
                
            
