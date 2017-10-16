t=int(input())
for i in range(t):
    s=input().rstrip('\r')
    count1=0
    count2=0
    flag1=0
    flag2=0
    for j in range(len(s)):
        if(s[j]=='U'):
            flag1=1
            if(flag2==1):
                count2+=1
                flag2=0
        elif(s[j]=='D'):
            flag2=1
            if(flag1==1):
                count1+=1
                flag1=0
    if(flag1==1):
        count1+=1
    elif(flag2==1):
        count2+=1
    if(count1<=count2):
        print(count1)
    else:
        print(count2)
    
        
            
