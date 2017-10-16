n,k=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
b=[0]*len(a)
count=0
if(n==1):
    if(a[0]==k):
        print('0')
        print(k)
    else:
        print('0')
        print(a[0])
else:
    for i in range(1,len(a)):
        if(a[i]+a[i-1]>=k):
            b[i]=a[i]
            b[i-1]=a[i-1]
            a[i]=b[i]
            a[i-1]=b[i-1]
        elif(a[i]+a[i-1]<k):
            b[i-1]=a[i-1]
            b[i]+=a[i]+k-(a[i]+a[i-1])
            count+=k-(a[i]+a[i-1])
            k1=b[i]
            a[i-1]=b[i-1]
            a[i]=k1
    print(count)
    for i in range(len(b)):
        print(b[i],end=' ')


        
        
    
