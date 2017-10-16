t=int(input())
for I in range(t):
    n,q=map(int,input().split(" "))
    a=[-1]*n
    eq=0 #Diagonal condition
    f1=0 #Opposite elements
    #f2=0 Special case
    count=10
    for I1 in range(q):
        i,j,val=map(int,input().split(" "))
        if(i==j and val!=0):
            eq=1
        elif(i!=j):
            if(a[i-1]==-1 or a[j-1]==-1):
                a[i-1]=count
                a[j-1]=count-val
                count+=1
            elif(a[i-1]!=-1 and a[j-1]!=-1):
                if(abs(a[i-1]-a[j-1])!=val):
                    f1=1
        print('eq',eq)
        print('f1',f1)
        print(a)
    if(eq==0 and f1==0):
        print('yes')
    else:
        print('no')
            
        
    
