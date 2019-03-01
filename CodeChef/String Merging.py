def lon_com(p1,p2,m,n):
    L = [[None]*(n+1) for i in xrange(m+1)]
    for i in range(m+1):
        for j in range(n+1):
            if (i == 0 or j == 0):
                L[i][j] = 0
            elif (p1[i-1] == p2[j-1]):
                L[i][j] = L[i-1][j-1]+1
            else:
                L[i][j] = max(L[i-1][j] , L[i][j-1])
    return L[m][n]



for I in range(input()):
    n,m=[int(i) for i in raw_input().split()]
    s1=raw_input()
    s2=raw_input()
    p=s1[0]
    p1=''
    p2=''
    for i in range(1,len(s1)):
        if(s1[i]!=p):
            p1+=p
            p=s1[i]
    p1+=p
    p=s2[0]
    for i in range(1,len(s2)):
        if(s2[i]!=p):
            p2+=p
            p=s2[i]
    p2+=p
    b=lon_com(p1,p2,len(p1),len(p2))
    print(len(p2)+len(p1)-b)
    
