s=input().rstrip('\r')
f=0
f1=0
f2=0
f3=0
for i in range(len(s)):
    if(s[i]=='h'):
        f=1
    if(s[i]=='e' and f==1):
        f1=1
    if(s[i]=='l' and f==1 and f1==1):
        f2+=1
    if(s[i]=='o' and f==1 and f1==1 and f2>=2):
        f3=1
    if(f3==1):
        break
if(f3==1):
    print('YES')
else:
    print('NO')
