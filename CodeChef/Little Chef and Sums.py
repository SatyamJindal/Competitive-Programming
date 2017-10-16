t=int(input())
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    min1=a[0]
    index=0
    b=[]
    for j in range(1,len(a)):
        if(a[j]<min1):
            min1=a[j]
            index=j
    print(index+1)
            
