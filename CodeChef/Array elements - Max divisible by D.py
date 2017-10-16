n=int(input())
a=list(map(int,input().split(" ")))
b=int(input())
max1=-1
for i in range(len(a)):
    if(a[i]%b==0 and a[i]>max1):
        max1=a[i]
print(max1)
