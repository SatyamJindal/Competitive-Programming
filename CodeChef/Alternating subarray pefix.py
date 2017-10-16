t=int(input())
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    b=[1]*n
    count=0
    for i in range(n-1,0,-1):
        if(a[i-1]<0 and a[i]>0):
            count+=1
        elif(a[i-1]>0 and a[i]<0):
            count+=1
        else:
            count=0
        b[i-1]+=count
    for i in range(len(b)):
        print(b[i],end=' ')
    print()
            
