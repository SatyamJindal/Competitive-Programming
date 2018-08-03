n,k=[int(i) for i in input().split()]
a=[0]*(k)
for _i in range(n):
    l,r=[int(i) for i in input().split()]
    l-=1
    r-=1
    for i in range(l,r+1):
        a[i]+=1
print(a.count(0))
for i in range(len(a)):
    if(a[i]==0):
        print(i+1,end=' ')
