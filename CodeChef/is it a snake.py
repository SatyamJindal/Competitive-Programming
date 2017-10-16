T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    total=0
    for i in range(2):
        B=list(input())
        total+=B.count('#')
        A.append(list(B))
    startcol=n
    lvl=0
    tot=0
    ok=1
    for i in range(n):
        if A[0][i]=='#' and A[1][i]=='#':
            startcol=i
            tot+=2
        elif A[0][i]=='#' or A[1][i]=='#':
            startcol=i
            tot+=1
            if A[0][i]=='#':
                lvl=0
            else:
                lvl=1
            break
        else:
            if tot>0 and tot<total:
                ok=0
    
    cur=startcol-1
    tot=0
    for i in range(startcol,n):
        if A[0][i]=='#' and A[1][i]=='#':
            lvl^=1
            tot+=2
            if cur!=i-1:
                ok=0
        elif A[0][i]=='#' or A[1][i]=='#':
            tot+=1
            if A[0][i]=='#' and lvl!=0:
                ok=0
            elif A[1][i]=='#' and lvl!=1:
                ok=0
            if cur!=i-1:
                ok=0
        else:
            if tot>0 and tot<total:
                ok=0
        cur=i
    if ok:
        print("yes")
    else:
        print("no")
