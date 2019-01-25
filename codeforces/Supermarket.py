n,m=[int(i) for i in input().split()]
mi  = 10**9
for I in range(n):
    a,b=[int(i) for i in input().split()]
    mi = min(mi,(a/b)*m)
print(mi)
