t=int(input())
for I in range(t):
    n,q=map(int,input().split(" "))
    a=[[-1]*n]*n
    b=[0]*n
    diag=0
    stp=0
    stp1=0
    for J in range(q):
        i,j,val=map(int,input().split(" "))
        if(i==j and val!=0):
            diag=1
        elif(i!=j):
            if(a[j-1][i-1]==-1):
                if(b[i-1]==0):
                    a[i-1][j-1]=val
                    if(i!=j):
                        b[i-1]=1
                elif(b[i-1]==1):
                    stp1=1
            elif(a[j-1][i-1]!=-1 and a[j-1][i-1]!=a[i-1][j-1]):
                stp=1
    if(diag!=1 and stp!=1 and stp1!=1):
        print('yes')
    else:
        print('no')
            
