n,m=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
b=list(map(int,input().split(" ")))
c=list(set(b))
a.sort()
c.sort()
print(a)
print(c)
if(a[0]==c[0]):
    print(a[0])
elif(a[0]<c[0]):
    print(str(a[0])+str(c[0]))
else:
    print(str(c[0])+str(a[0]))
