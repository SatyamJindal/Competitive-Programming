t=int(input())
for I in range(t):
    n=int(input())
    b=[]
    for i in range(n):
        a=[int(i) for i in input().split()]
        a.sort()
        b.append(a)
    flag=0
    max1=b[n-1][n-1]
    prev=b[n-1][n-1]
    for i in range(n-2,-1,-1):
        if(prev<b[i][n-1] and prev<b[i][0]):
            flag=1
            break
        else:
            for j in range(n-1,-1,-1):
                if(b[i][j]<prev):
                    max1+=b[i][j]
                    prev=b[i][j]
                    break
    if(flag==1):
        print(-1)
    else:
        print(max1)
            
        
 
