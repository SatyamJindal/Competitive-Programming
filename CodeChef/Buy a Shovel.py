a=[10,5,10,5,2,5,10,5,10]
k,r=map(int,input().split(" "))
p=int(str(k)[-1])
if(p==0):
    print('1')
elif(p==r):
    print('1')
else:
    flag2=0
    flag1=a[p-1]
    for i in range(1,11):
        if(int(str(p*i)[-1])==r):
            flag2=i
            break
    if(flag2==0):
        print(flag1)
    else:
        if(flag2<=flag1):
            print(flag2)
        else:
            print(flag1)
    
    
