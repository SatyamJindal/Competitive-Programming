s=input().rstrip('\r')
a=''
if(ord(s[0])>96):
    a+=chr(ord(s[0])-32)
else:
    a+=s[0]
for i in range(1,len(s)):
    if(ord(s[i])<91 and ord(s[i])>64):
        a+=chr(ord(s[i])+32)
    else:
        a+=s[i]
print(a)
    
