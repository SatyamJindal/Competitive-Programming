n,m=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
a.sort()
min1=999999999999
for i in range(m-n+1):
    min1=min(a[i+n-1]-a[i],min1)
print(min1)
