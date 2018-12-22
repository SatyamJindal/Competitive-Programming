n=int(input())
a=[0]*n
b=[int(i) for i in input().split()]
for i in range(n//2):
    a[i]=0
    a[n-i-1]=b[i]
    if(i==0):
        continue
    adj = max(a[i-1]-a[i],a[n-1-i]-a[n-i])
    a[i]+=adj
    a[n-i-1]-=adj
print(*a)
    
