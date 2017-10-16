n=int(input())
count1=0
count2=0
flag1=0
flag2=0
s=input().rstrip('\r')
s1=''
for i in range(len(s)):
    if(s[i]=='1'):
        count1+=1
        flag1=1
        #print('count1',count1)
    elif(s[i]=='0'):
        count2+=1
        flag2=1
        if(flag1==1 and count1>0):
            s1+=str(count1)
            count1=0
            flag1=0
    if(count2==2):
        s1+='0'
        count2=0
if(flag2==0):
    s1+=str(count1)
    count1=0
if(count1>0):
    s1+=str(count1)
if(list(set(s1))[0]=='0'):
    print('0')
else:
    print(s1)
    
    

    
    
        
        
