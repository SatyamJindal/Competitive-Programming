s=input().rstrip('\r')
count1=0
count2=0
flag=0
for i in range(len(s)):
    if(s[i]=='0'):
        count1+=1
        count2=0
    else:
        count2+=1
        count1=0
    if(count1==7 or count2==7):
        flag=1
        break
if(flag==1):
    print('YES')
else:
    print('NO')
