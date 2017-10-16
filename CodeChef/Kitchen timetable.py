t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    b=list(map(int,input().split(" ")))
    count=0
    if(b[0]<=a[0]):
        count+=1
    for j in range(1,len(a)):
        if(b[j]<=a[j]-a[j-1]):
            count+=1
    print(count)
