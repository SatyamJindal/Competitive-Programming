t=int(input())
for i in range(t):
    flag=0
    count1=0
    n,k=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    for j in range(len(a)):
        if(a[j]%2==0):
            count1+=1
        if(count1>=k):
            flag=1
            break
    if(flag==1):
        print('YES')
    else:
        print('NO')
