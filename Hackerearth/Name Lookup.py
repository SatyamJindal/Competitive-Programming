from collections import defaultdict as dd
n=int(input())
d=dd(str)
for I in range(n):
    a=[str(i) for i in input().split()]
    d[int(a[0])]=a[1]
q=int(input())
for i in range(q):
    print(d[int(input())])
