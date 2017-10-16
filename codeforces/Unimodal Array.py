n=int(input())
a=list(map(int,input().split(" ")))
if(n==1 or n==2):
    print('YES')
else:
    flag=0
    flag1=0
    flag2=0
    for i in range(len(a)-1):
        if(a[i+1]>a[i]):
            flag=1
            if(flag1==1):
                flag2=1
                break
        if(a[i+1]<a[i]):
            flag1=1
    if(flag2==1):
        print('NO')
    elif(flag1==1 or len(set(a))==1):
        print('YES')
    else:
        print('NO')
        
        
        
