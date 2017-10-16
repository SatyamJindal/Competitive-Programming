t=int(input())
for T in range(t):
    count=0
    n,k=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    b=[0]*101
    for i in range(len(a)):
        if(a[i]==i+1):
            b[a[i]]=-1
        else:
            b[a[i]]+=1
    for j in b:
        if(j>=k):
            count+=1
    print(b)
    print(count)
    
