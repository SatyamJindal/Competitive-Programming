import sys
sys.setrecursionlimit(1500)


def max1(n,cache):
    if(n==1 or n==0):
        return n
    elif(cache[n]!=-1):
        return cache[n]
    else:
        cache[n]=max(max1(n//2,cache)+max1(n//3,cache)+max1(n//4,cache),n)
    return cache[n]
        

t=int(input())
for I in range(t):
    n=int(input())
    cache=[-1]*(n+1)
    print(max1(n,cache))
