n,q=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
min1=a[0]
max1=a[0]
for i in range(1,len(a)):
    if(a[i]<min1):
        min1=a[i]
    if(a[i]>max1):
        max1=a[i]
for j in range(q):
    b=int(input())
    if(b>=min1 and b<=max1):
        print('Yes')
    else:
        print('No')
