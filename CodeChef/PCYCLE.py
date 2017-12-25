n=int(input())
a=[int(i) for i in input().split()]
b=[]
vis=[0]*n
fin_count=0
for i in range(n):
    if(vis[i]==0):
        c=[i+1]
        fin_count+=1
        num=i
        vis[i]=1
        while(i+1!=a[num]):
            vis[num]=1
            c.append(a[num])
            num=a[num]-1
        vis[num]=1
        c.append(i+1)
        b.append(c)
print(fin_count)
for i in b:
    print(*i)
            
