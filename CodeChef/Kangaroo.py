x1,v1,x2,v2=map(int,input().split(" "))
flag=0
if(x1>x2 and v1>v2):
    print('NO')
elif(x2>x1 and v2>v1):
    print('NO')
else:
    while(x1!=x2 or(x1!=10000 or x2!=10000)):
        x1+=v1
        x2+=v2
        if(x1==x2):
            flag=1
            break
if(flag==1):
    print('YES')
