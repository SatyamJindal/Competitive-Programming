M = 10**9+9
from bisect import bisect_left as bl,bisect_right as br
import bisect as bi
n,q=[int(i) for i in input().split()]
arr=[]
for i in range(n):
    a,b=[int(i) for i in input().split()]
    val = 4*a*b + 2*max(a,b)
    bi.insort(arr,val)
find = [int(i) for i in input().split()]
for i in find:
    to_find = (i)*(i+1)
    count = br(arr,to_find) - bl(arr,to_find)
    if(count==0):
        print(-1)
    else:
        print(pow(count,M-2,M))

    
