t=int(input())
for T in range(t):
    s=input()
    count=0
    flag=0
    flag1=0
    flag2=0
    for i in range(len(s)):
        if(s[i]=='C'):
            flag=1
        elif(s[i]=='E'):
            flag1=1
        elif(s[i]=='S'):
            flag2=1
        if(s[i]=='C' and (flag1==1 or flag2==1)):
            count=1
            break
        elif(s[i]=='E' and flag2==1):
            count=1
            break
    print('yes') if(count==0) else print('no')
            
