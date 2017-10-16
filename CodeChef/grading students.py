t=int(input())
for i in range(t):
    b=[]
    m=''
    n=input().rstrip('\r')
    for j in n:
        b.append(int(j))
    p=b[-1]
    if(p<5 and (5-p<3) and (int(n)+5-p)>39):
        b[-1]+=(5-p)
    elif(p>5 and (10-p<3) and (int(n)+10-p)>39):
        b[-1]=0
        b[-2]+=1
    for k in b:
        m+=str(k)
    print(int(m))
        
        
