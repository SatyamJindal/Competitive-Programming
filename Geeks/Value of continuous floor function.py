from math import floor as fl

def func(n,cache):
    global b
    if(n==0):
        return 0
    if(cache[n]!=-1):
        return cache[n]
    else:
        cache[n]=n+func(fl(n/2),cache)
        return cache[n]

t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    cache=[-1]*(max(a)+1)
    b=[]
    count=0
    for i in a:
        b.append(func(i,cache))
    print(*b)
