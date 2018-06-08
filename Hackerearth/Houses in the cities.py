t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    pre=[0]*(n+1)
    for i in range(1,n+1):
        pre[i] = pre[i-1]+a[i-1]
    q=int(input())
    for _i in range(q):
        u,v=[int(i) for i in input().split()]
        print(pre[v]-pre[u-1])
    
