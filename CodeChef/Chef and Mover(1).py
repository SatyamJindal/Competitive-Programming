t=int(input())
for I in range(t):
    n,d=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    p=sum(a)
    if(p%len(a)!=0):
        print(-1)
    else:
        count=0
        k=p//len(a)
        i=0
        while(i+d<len(a)):
            p1=0
            k1=abs(a[i]-k)
            k2=abs(a[i+d]-k)
            if(k1==k2):
                count+=abs(a[i]-k)
                a[i]=k
                a[i+d]=k
            else:
                if(a[i]>a[i+d]):
                    p1=a[i]-k
                    a[i]-=p1
                    a[i+d]+=p1
                    count+=p1
                else:
                    p1=k-a[i]
                    a[i]+=p1
                    a[i+d]-=p1
                    count+=p1
            i+=1
        if(len(set(a))!=1):
            print(-1)
        else:
            print(count)
        
