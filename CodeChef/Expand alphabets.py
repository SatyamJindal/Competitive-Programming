s=input().rstrip('\r')
a=''
b=''
for i in range(len(s)):
    if(s[i].isdigit()):
        b+=s[i]
    else:
        a+=int(b)*(s[i])
        b=''
print(a)
        
    
