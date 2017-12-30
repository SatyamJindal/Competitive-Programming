t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    print(sum(a)-n*(min(a)))
