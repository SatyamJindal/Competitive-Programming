t=int(input())
for i in range(t):
    n,q=map(int,input().split(" "))
    x=list(map(int,input().split(" ")))
    for j in range(q):
        count1=0
        flag=0
        y=[]
        z=[]
        a,b,c,d=map(int,input().split(" "))
        for g in range(a-1,b):
            y.append(x[g])
        for g in range(c-1,d):
            z.append(x[g])
        y.sort()
        z.sort()
        for g1 in range(len(y)):
            if(y[g1]!=z[g1]):
                count1+=1
            if(count1>1):
                flag=1
                break
        if(flag==1):
            print('NO')
        else:
            print('YES')
            
            
