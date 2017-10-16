s=input().rstrip('\r')
flag=0
for i in range(len(s)):
    if(s[i]=='H' or s[i]=='Q' or s[i]=='9'):
        flag=1
        break
if(flag==1):
    print('YES')
else:
    print('NO')
