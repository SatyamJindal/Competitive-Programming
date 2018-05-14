t=int(input())
for I in range(t):
    s=input()
    a=[s[0]]
    c=1
    for i in range(1,len(s)):
        if(ord(s[i])+32==ord(a[-1]) or ord(a[-1])==ord(s[i]) or ord(a[-1])+32==ord(s[i])):
            c+=1
        else:
            print(c,end='')
            print(a[-1].lower(),end='')
            a.append(s[i])
            c=1
    print(c,end='')
    print(a[-1].lower(),end='')
    print()
    
