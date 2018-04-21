MOD = 10**9+7
h=int(input())
while(h!=0):
    a=[int(i) for i in input().split()]
    for i in range(len(a)-1,-1,-2):
        par = i//2 - 1
        if(par>-1):
            a[par] = max(a[par*2+1]*a[par],a[par*2+2]*a[par])
    print(a[0]%MOD)
    h=int(input())
