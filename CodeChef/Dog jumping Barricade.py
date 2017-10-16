d=int(input())
for i in range(d):
    x,y,n=map(int,input().split(" "))
    a=list(map(int,input().split(" ")))
    c=x-y
    count=0
    for i in range(len(a)):
        count+=a[i]//c
        if(a[i]%c>0):
            count+=1
        print('count',count)
    print(count)
