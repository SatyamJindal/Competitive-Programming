from collections import defaultdict as dd
n,m=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
b=[int(i) for i in input().split()]
final=[]
d=dd(int)
for i in b:
    d[i]=1
for i in a:
    if(d[i]==1):
        final.append(i)
print(*final)
