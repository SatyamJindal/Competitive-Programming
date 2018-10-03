mx=-1
n=[int(i) for i in input().split()]
for i in range(14):
    arr=n[:]
    st=arr[i]
    arr[i]=0
    loop = st//14
    ans=0
    for j in range(14):
        arr[j]+=loop
    for j in range(1,st%14+1):
        arr[(i+j)%14]+=1
    for i in arr:
        if(i%2==0):
            ans+=i
    mx = max(mx,ans)
print(mx)
