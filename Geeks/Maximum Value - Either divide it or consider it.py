import sys
sys.setrecursionlimit(2000)

def ma(n,cache):
    if(n==1 or n==0):
        return n
    if(cache[n]!=-1):
        return cache[n]
    else:
        cache[n]=max(ma(n//2,cache)+ma(n//3,cache)+ma(n//4,cache)+ma(n//5,cache),n)
    return cache[n]
    

t=int(input())
for I in range(t):
    n=int(input())
    cache=[-1]*(n+1)
    print(ma(n,cache))
