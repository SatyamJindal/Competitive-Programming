a=[]
for i in range(5):
    b=list(map(int,input().split(" ")))
    a.append(b)
b=0
b1=0
for i in range(5):
    for j in range(5):
        if(a[i][j]==1):
            b=i
            b1=j
            break
print(abs(b-2)+abs(b1-2))
