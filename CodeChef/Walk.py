t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    max1=0
    for i in range(len(a)):
        if(a[i]+i>max1):
            max1=a[i]+i
    print(max1)
