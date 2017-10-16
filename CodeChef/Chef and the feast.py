t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    count1=0
    count2=0
    sum1=0
    sum2=0
    b=[]
    for j in a:
        if(j<0):
            sum1+=j
            b.append(j)
        else:
            sum2+=j
            count2+=1
    sum3=(sum1)+(sum2*count2)
    if(sum2!=0):
        b.sort()
        for k in range(len(b)-1,-1,-1):
            sum1+=abs(b[k])
            sum4=(sum1)+((sum2-abs(b[k]))*(count2+1))
            if(sum4<sum3):
                break
            else:
                count2+=1
                sum3=sum4
                sum2-=abs(b[k])
    print(sum3)
            
        
        
    
