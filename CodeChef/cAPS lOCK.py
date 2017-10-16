s=input().rstrip('\r')
a=''
c=''
flag=0
if(ord(s[0])>96):
    a+=chr(ord(s[0])-32)
else:
    a+=s[0]
for i in range(1,len(s)):
    if(ord(s[i])>64 and ord(s[i])<91):
        c+=chr(ord(s[i])+32)
    else:
        flag=1
        break
if(flag==1):
    a+=s[1:]
else:
    a+=c
print(a)

    
    
