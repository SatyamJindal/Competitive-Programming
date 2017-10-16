t=int(input())
for I in range(t):
    a,b=map(str,input().split(" "))
    c=[0]*26
    for i in range(len(a)):
        c[ord(a[i])-97]+=1
    f=max(c)
    c1=0
    flag=0
    min1=1000000000000
    if(c[0]!=0):
        min1=c[0]
        flag=1
    for i in range(len(c)):
        if(c[i]==f):
            c1+=1
        if(c[i]>0 and flag==0):
            min1=c[i]
            flag=1
        if(c[i]<min1 and c[i]!=0):
            min1=c[i]
    d=(f-min1-int(b))*c1
    if(d<0):
        print(0)
    else:
        print(d)
        
    
    
