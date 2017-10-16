t=int(input())
for i in range(t):
    n,q=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    for j in range(q):
        b=list(map(int,input().split(" ")))
        if(b[0]==1):
            sum1=0
            for h in range(b[1]-1,n,b[1]):
                sum1+=a[h]*a[h]
            print(sum1)
        else:
            a[b[1]-1]=b[2]
            
        
