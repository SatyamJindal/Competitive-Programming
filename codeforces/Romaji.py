vow=['a','e','i','o','u']
s=input()
flag=0
for i in range(len(s)-1):
    if(s[i] not in vow and s[i]!='n' and s[i+1] not in vow):
        flag=1
        break
if(s[-1]!='n' and s[-1] not in vow):
    flag=1
if(flag):
    print('NO')
else:
    print('YES')
