n=int(input())
b=[]
c=[]
index=0
for i in range(n):
    a=list(map(str,input().split(" ")))
    d=(int(a[1])*(int(a[2])))/100
    b.append(d)
    c.append(a)
min1=b[0]
for j in range(1,n):
    if(b[j]<min1):
        min1=b[j]
        index=j
print(c)
print(c[index][0])
