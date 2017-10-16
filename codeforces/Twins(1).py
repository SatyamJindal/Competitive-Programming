n=int(input())
a=list(map(int,input().split(" ")))
if(n==1):
    print('1')
elif(n==2):
    if(a[0]==a[1]):
        print('2')
    else:
        print('1')
else:
    count=0
    sum1=0
    a.sort()
    if(n%2==0):
        b=sum(a)//2
    else:
        b=sum(a)//2+1
    for i in range(len(a)-1,-1,-1):
        sum1+=a[i]
        if(sum1<=b):
            count+=1
        else:
            count+=1
            break
    print(count)
        
        
