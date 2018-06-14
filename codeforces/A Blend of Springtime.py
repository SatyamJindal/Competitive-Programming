s=input()
if(len(s)<3):
    print('No')
else:
    flag=0
    for i in range(len(s)-2):
        if(s[i]!='.' and s[i+1]!='.' and s[i+2]!='.'):
            a=set()
            a.add(s[i])
            a.add(s[i+1])
            a.add(s[i+2])
            if(len(a)==3):
                flag=1
                break
    if(flag==1):
        print('Yes')
    else:
        print('No')
        
