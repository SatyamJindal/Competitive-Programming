t=int(input())
for i in range(t):
    s=input().rstrip('\r')
    count1=1
    flag1=0
    flag2=0
    max1=1
    for i in range(len(s)):
        if(s[i]=='<'):
            flag1=1
            if(flag2==1):
                count1=1
                flag2=0
            count1+=1
            if(count1>max1):
                max1=count1
        elif(s[i]=='>'):
            flag2=1
            if(flag1==1):
                count1=1
                flag1=0
            count1+=1
            if(count1>max1):
                max1=count1
    print(max1)
                
            
  

        
