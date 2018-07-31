import bisect as bi
from math import floor as fl
n=int(input())
a=[]
for I in range(n):
    x=int(input())
    bi.insort(a,x)
    si = len(a)
    if(si%2!=0):
        print(a[si//2])
    else:
        print(fl((a[(si//2)-1]+ a[(si//2)])/2))
