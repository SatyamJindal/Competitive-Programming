from collections import defaultdict as dd
n,m,k=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
b=a[:]
b.sort()
cnt=dd(int)
ans=0
for i in b[-m*k:]:
    ans+=i
    cnt[i]+=1
ct=0
tot=0
print(ans)
for i in range(len(a)):
    if(cnt[a[i]]!=0):
        cnt[a[i]]-=1
        ct+=1
    if(ct==m):
        tot+=1
        if(tot!=k):
            print(i+1,end=' ')
        ct=0
