from collections import defaultdict as dd
n=int(input())
a=[int(i) for i in input().split()]
ct=1
dnary = dd(int)
for i in a:
    dnary[i]+=1
    ct = max(ct,dnary[i])
print(ct)
