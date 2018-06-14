q=int(input())
for I in range(q):
    h1,m1,h2,m2=[int(i) for i in input().split()]
    k=int(input())
    acth  = h1+k
    ans=0
    ans+=(acth-h2-1)*60
    if(m1>=m2):
        ans+=(60+abs(m1-m2))
    else:
        ans+=(60-abs(m1-m2))
    print(ans)
