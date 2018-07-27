from bisect import bisect_left as bl,bisect_right as br
import bisect as bi
t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    left=[]
    right=[]
    for i in range(len(a)):
        for j in range(len(a)):
            left.append(a[i]**2 + a[j])
            right.append(a[i]**2 + a[j]**2)
    right.sort()
    ans=0
    for val in left:
        ans+=br(right,val) - bl(right,val)
    print(ans)
