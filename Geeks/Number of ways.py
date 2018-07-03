
def ways(n,cache):
    if(n==1 or n==2 or n==3):
        return 1
    if(n==4):
        return 2
    if(cache[n]!=-1):
        return cache[n]
    else:
        cache[n]=ways(n-1,cache)+ways(n-4,cache)
        return cache[n]
        
t=int(input())
for I in range(t):
    n=int(input())
    cache=[-1]*(n+1)
    print(ways(n,cache))
