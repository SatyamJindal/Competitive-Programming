t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    a.sort()
    c=0
    cost=0
    for i in range(len(a)-1,-1,-1):
        c+=1
        if(c<3):
            cost+=a[i]
        #c+=1
        if(c==4):
            c=0
    print(cost)
