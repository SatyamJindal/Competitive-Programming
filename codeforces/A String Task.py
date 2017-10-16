s=input().rstrip('\r')
a=''
for i in range(len(s)):
    if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='y' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O'and s[i]!='U' and s[i]!='Y'):
        a+='.'
        if(ord(s[i])>64 and ord(s[i])<91):
           a+=chr(ord(s[i])+32)
        else:
           a+=s[i]
print(a)
