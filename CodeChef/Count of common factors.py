n=int(input())
a=[]
for i in range(n):
    a.append(int(input()))
v=min(a)
b=[]
for j in range(2,v+1):
    flag=0
    for g in a:
        if(g%j!=0):
            flag=1
            break
    if(flag==0):
        b.append(j)
print(len(b))
