
def ways(n,cache):
    if(n==0 or n==1):
        return 1
    elif(n==2):
        return 2
    if(cache[n]!=-1):
        return cache[n]
    else:
        cache[n]=ways(n-1,cache)+ways(n-2,cache)+ways(n-3,cache)
        return cache[n]

t=int(input())
for I in range(t):
    count=0
    n=int(input())
    cache=[-1]*(n+1)
    print(ways(n,cache))
