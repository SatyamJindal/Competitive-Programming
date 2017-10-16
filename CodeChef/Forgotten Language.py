t=int(input())
for i in range(t):
    d=[]
    n,k=map(int,input().split(" "))
    a=list(map(str,input().split(" ")))
    b=set()
    for j in range(k):
        c=list(map(str,input().split(" ")))
        b|=set(c[1:])
    b=list(b)
    for j in a:
        flag=0
        for g in range(len(b)):
            if(j==b[g]):
                flag=1
                break
        if(flag==1):
            print('YES',end=' ')
        else:
            print('NO',end=' ')
    print()
    
        
    
