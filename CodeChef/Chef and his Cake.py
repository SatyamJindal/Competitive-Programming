t=int(input())
a=[]
b=[]
for i in range(101):
    c=[]
    d=[]
    for j in range(101):
        if(i%2==0 and j%2==0):
            c.append('R')
            d.append('G')
        elif(i%2==0 and j%2!=0):
            c.append('G')
            d.append('R')
        elif(i%2!=0 and j%2==0):
            c.append('G')
            d.append('R')
        else:
            c.append('R')
            d.append('G')            
    a.append(c)
    b.append(d)
for I in range(t):
    n,m=map(int,input().split(" "))
    cost1=0
    cost2=0
    e=[]
    for i in range(n):
        s=input()
        e.append(s)
    for i in range(len(e)):
        for j in range(m):
            if(e[i][j]=='R' and a[i][j]=='G'):
                cost1+=5
            elif(e[i][j]=='G' and a[i][j]=='R'):
                cost1+=3
            if(e[i][j]=='R' and b[i][j]=='G'):
                cost2+=5
            elif(e[i][j]=='G' and b[i][j]=='R'):
                cost2+=3
    print(min(cost1,cost2))
