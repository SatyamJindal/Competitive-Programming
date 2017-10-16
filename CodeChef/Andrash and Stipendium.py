t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    flag=0
    flag1=0
    avg=0
    for g in range(len(a)):
        if(a[g]==2):
            flag=1
            break
        avg+=a[g]
        if(a[g]==5):
            flag1=1
    if(flag==1 or flag1==0):
        print('No')
    else:
        avg//=n
        if(avg>=4):
            print('Yes')
        else:
            print('No')
    
