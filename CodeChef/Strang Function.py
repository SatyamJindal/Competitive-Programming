t=int(input())
for I in range(t):
    a,n=[int(i) for i in input().split()]
    g=pow(a,n,9)
    if(g==0):
        print(9)
    else:
        print(g)
