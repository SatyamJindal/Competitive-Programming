s=input().rstrip('\r')
a=[]
if(len(s)==1):
    print(s[0])
else:
    for i in range(len(s)):
        if(s[i].isdigit()):
            a.append(int(s[i]))
    b=''
    a.sort()
    for i in range(len(a)):
        b+=str(a[i])
        if(i!=len(a)-1):
            b+='+'
    print(b)
    
