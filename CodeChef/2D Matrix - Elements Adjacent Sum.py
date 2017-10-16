r,c=map(int,input().split(" "))
a=[]
c1=[]
for i in range(r):
    c1.append([0]*c)
    b=list(map(int,input().split(" ")))
    a.append(b)
for i in range(r):
    for j in range(c):
        if(j==0):
            c1[i][j]=a[i][j+1]
        elif(j==c-1):
            c1[i][j]=a[i][j-1]
        else:
            c1[i][j]=a[i][j-1]+a[i][j+1]
for i in range(r):
    for j in range(c):
        print(c1[i][j],end=' ')
    print()
