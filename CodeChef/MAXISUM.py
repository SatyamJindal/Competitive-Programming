t=int(input())
for t in range(t):
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    b=[int(i) for i in input().split()]
    print(sum(x*y for x,y in zip(a,b)) + k*max(map(abs,b)))
