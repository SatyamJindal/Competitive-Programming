s=input()
a=[str(i) for i in input().split()]
flag=0
for i in a:
    if(i[0]==s[0] or i[1]==s[1]):
        flag=1
        break
if(flag==1):
    print('YES')
else:
    print('NO')
