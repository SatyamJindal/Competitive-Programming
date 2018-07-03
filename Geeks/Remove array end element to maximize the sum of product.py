
def f(a,st,en,mul,cache):
    if(st>en):
        return 0
    if(cache[st][en]!=-1):
        return cache[st][en]
    else:
        cache[st][en]=max(a[st]*mul+f(a,st+1,en,mul+1,cache),a[en]*mul+f(a,st,en-1,mul+1,cache))
        return cache[st][en]
    

t=int(input())
for I in range(t):
    n=int(input())
    cache=[[-1 for i in range(n+1)] for i in range(n+1)]
    a=[int(i) for i in input().split()]
    print(f(a,0,len(a)-1,1,cache))
