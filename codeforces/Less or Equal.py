from bisect import bisect_left as bl
n,k=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
a.sort()
ele=a[k-1]
if(k==0):
    if(min(a)-1>0):
        print(min(a)-1)
    else:
        print(-1)
else:
    if(k-1!=n-1 and a[k-1]==a[k]):
        print(-1)
    elif(k-1==n-1):
        if(ele<=10**9):
            print(ele)
        else:
            print(-1)
    else:
        print(ele)
    
