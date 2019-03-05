n,m,k=[int(i) for i in input().split()]
p=[int(i) for i in input().split()]
sc=[int(i) for i in input().split()]
hsh = dict()
kk=[int(i) for i in input().split()]
for i in range(len(sc)):
    if sc[i] not in hsh.keys():
        hsh[sc[i]] = []
    hsh[sc[i]].append(p[i])
ans=0
for i in range(len(kk)):
    if p[kk[i]-1] != max(hsh[sc[kk[i]-1]]):
        ans +=1

print(ans)
