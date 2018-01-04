t=int(input())
for I in range(t):
    n,m=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    b=[0]*n
    if(n==1):
        print(0)
    else:
        for i in range(len(a)):
            b[0]=max(b[0],a[i])
            b[n-1]=max(b[n-1],n-a[i]-1)
        #print(b)
        for i in range(n):
            #print(b[n-1]-n-i)
            print(max(b[0]-i,b[n-1]-(n-i-1)),end=' ')
        print()

    
