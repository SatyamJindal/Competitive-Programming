n=int(input())
a=list(map(int,input().split(" ")))
c1=0
c2=0
c3=0
c4=0
count=0
for i in a:
    if(i==1):
        c1+=1
    elif(i==2):
        c2+=1
    elif(i==3):
        c3+=1
    else:
        c4+=1
count+=c4
if(c1>=c3):
    count+=c3
    c1-=c3
    c3=0
elif(c3>c1):
    count+=c1
    c3-=c1
    count+=c3
    c1=0
if(c2>1):
    count+=c2//2
    c2=c2%2
if(c2==1):
    count+=1
    c2=0
    c1-=2
if(c1>0):
    count+=c1//4
    c1=c1%4
    if(c1>0):
        count+=1
print(count)
    
    
    


    
