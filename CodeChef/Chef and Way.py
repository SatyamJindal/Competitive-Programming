n,k=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
q=len(a)
a[1:q-1].sort()
index=0
prod=1
u=a[q-1]
for i in range(1,q-1):
    if(u-a[i]<=k and a[i]!=u):
        index=i
        break
for i in range(1,index+1):
    prod*=a[i]
print((a[0]*prod*u)%1000000007)
