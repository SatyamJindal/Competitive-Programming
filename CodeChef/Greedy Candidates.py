t=int(input())
for I in range(t):
    n,m=map(int,input().split(" "))
    exp=list(map(int,input().split(" ")))
    giv=[]
    quo=[]
    for i in range(m):
        a,b=map(int,input().split(" "))
        giv.append(a)
        quo.append(b)
    c=[]
    for i in range(n):
        s=input()
        c.append(s)
    a1=[0]*m
    b1=[0]*m
    noca=0
    sal=0
    wh=0
    n1=0
    for i in c:
        index=0
        max1=0
        for j in range(len(i)):
            if(i[j]=='1' and giv[j]>max1 and a1[j]==0 and quo[j]>0 and giv[j]>=exp[n1]):
                max1=giv[j]
                index=j
        if(max1!=0):
            noca+=1
            sal+=max1
            quo[index]-=1
            b1[index]=1
            if(quo[index]==0):
                a1[index]=1
                #wh+=1
        n1+=1
    for j in range(len(b1)):
        if(b1[j]==0):
            wh+=1
    print(noca,end=' ')
    print(sal,end=' ')
    print(wh)

    
        
                
            
            
    
    
        
