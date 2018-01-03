t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    b=min(a)
    sum1=0
    c=0
    for i in a:
        if(i==b):
            c+=1
        sum1+=(b*i)
    sum1-=(b*b)
    print(sum1)
