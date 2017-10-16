r=int(input())
c=int(input())
a=[]
for i in range(r):
    x1=list(map(int,input().split(" ")))
    a.append(x1)
e=int(input())
f=int(input())
for i in range(r):
    for j in range(c):
        if(a[i][j]%2==0):
            a[i][j]*=e
        else:
            a[i][j]*=f
        print(a[i][j],end=' ')
    print()

