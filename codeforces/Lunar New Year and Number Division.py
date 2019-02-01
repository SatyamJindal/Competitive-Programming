n=int(input())
a=[int(i) for i in input().split()]
ans=0
a.sort()
for i in range(len(a)//2):
    ans+=(a[i]+a[n-i-1])**2
print(ans)
