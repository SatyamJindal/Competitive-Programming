n,s=[int(i) for i in input().split()]
ans=0
while(s>0 and n>0):
    ans+=s//n
    s=(s%n)
    n-=1
print(ans)
