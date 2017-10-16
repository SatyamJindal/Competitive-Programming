t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    count=0
    flag=0
    b=[0]*7
    for i in range(len(a)):
        if(a[i]<=7):
            b[a[i]-1]+=1
        elif(a[i]>7):
            flag=1
            break
    if(flag==1):
        print('no')
    else:
        for j in range(7):
            if(b[j]>0):
                count+=1
        if(count!=7):
            print('no')
        else:
            if(a==a[::-1]):
                print('yes')
            else:
                print('no')
            
            
