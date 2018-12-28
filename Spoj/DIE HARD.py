t=int(input())

dp=[[-1 for i in range(2005)]for j in range(2005)]

def ans(h,a,ct):
    global dp
    if(h<1 or a<1):
        return 0
    if(dp[h][a]!=-1):
        return dp[h][a]
    if(ct):
        return 1 + ans(h+3,a+2,0)

    dp[h][a] = 1 + max(ans(h-20,a+5,1),ans(h-5,a-10,1))

    return dp[h][a]

for I in range(t):
    h,a=[int(i) for i in input().split()]
    print(ans(h+3,a+2,0))
