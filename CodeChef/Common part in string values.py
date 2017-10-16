s1=input().rstrip('\r')
s2=input().rstrip('\r')
a=list(set(s1)&set(s2))
b=''
for i in range(len(s2)):
    if s2[i] in a:
        b+=s2[i]
    else:
        break
print(b)
    
