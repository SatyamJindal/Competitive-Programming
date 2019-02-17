x,y,z=[int(i) for i in input().split()]
a,b,c=[int(i) for i in input().split()]
f=0
a-=x
if(a<0):
    f=1
b_tot = a+b
b_tot-=y
if(b_tot<0):
    f=1
if(b_tot+c<z):
    f=1
if(f==1):
    print('NO')
else:
    print('YES')
