t=int(input())
for I in range(t):
    n,k=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    b=[int(i) for i in input().split()]
    cost=(k//a[0])*b[0]
    for i in range(1,len(a)):
        if((k//a[i])*b[i]>cost):
            cost=(k//a[i])*b[i]
    print(cost)
