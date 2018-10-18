n=int(input())
le=[int(i) for i in input().split()]
ri=[int(i) for i in input().split()]
notp = False
check=[]
for i in range(n):
    check.append(n-le[i]-ri[i])
for i in range(n):
    tot=0
    for j in range(i-1,-1,-1):
        if(check[j]>check[i]):
            tot+=1
    if(tot!=le[i]):
        notp=True
        break
if(notp==False):
    for i in range(n):
        tot=0
        for j in range(i+1,n):
            if(check[j]>check[i]):
                tot+=1
        if(tot!=ri[i]):
            notp=True
            break
if(notp):
    print('NO')
else:
    print('YES')
    print(*check)
