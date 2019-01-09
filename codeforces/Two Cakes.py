n,a,b=[int(i) for i in input().split()]
ans=0
for i in range(1,min(a,b)+1):
    if(a//i + b//i>=n):
        ans=i
print(ans)
