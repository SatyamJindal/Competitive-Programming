t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    b=[] #odd
    c=[] #even
    count1=0
    count2=0
    count3=0
    flag=0
    for j in range(len(a)):
        if(a[j]%2==0):
            c.append(a[j])
        else:
            b.append(a[j])
    b.sort()
    c.sort()
    for k in range(len(c)-1,0,-1):
        if(c[k-1]==c[k]):
            count2+=1
    for k in range(len(b)-1,0,-1):
        if(b[k-1]==b[k]):
            count1+=1
        if(b[k-1]==1):
            flag=1
            index=k-1
    if(flag==1):
        #print('hello')
        count1+=len(b)-k
    for j in range(len(b)-1,-1,-1):
        for k in range(len(c)-1,-1,-1):
            if(b[j]>c[k]):
                count3+=k+1
                #print('hello1')
                break
    print(count1+count2+count3)
    
    
    
            
    
    
        
