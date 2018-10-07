n,l,div=[int(i) for i in input().split()]
ans=0
a=[]
for i in range(n):
    b=[int(i) for i in input().split()]
    a.append(b)
a.sort()
if(n==0):
    print(l//div)
elif(n==1):
    print(a[0][0]//div + (l-(a[0][0]+a[0][1]))//div)
else:
    ans+=(a[0][0])//div
    curr = a[0][0]+a[0][1]
    for i in range(1,len(a)):
        ans+=(a[i][0]-curr)//div
        curr = a[i][0]+a[i][1]
    ans+=(l-curr)//div
    print(ans)
