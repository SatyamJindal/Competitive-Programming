t=int(input())
for i in range(t):
    n,k=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    count=0
    for j in range(len(a)):
        if(a[j]<=k):
            count+=k-a[j]
        elif(a[j]%k==0):
            count+=0
        else:
            p=a[j]//k
            a1=(p)*k
            a2=(p+1)*k
            if(a[j]-a1<a2-a[j]):
                count+=a[j]-a1
            else:
                count+=a2-a[j]
    print(count)
    
