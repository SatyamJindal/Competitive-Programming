n=int(input())
a=[0]*52
s=input()
if(n<26):
    print('NO')
else:
    f=0
    for i in range(len(s)):
        if(ord(s[i])>96):
            a[ord(s[i])-97]+=1
        else:
            a[ord(s[i])-39]+=1
    for i in range(26):
        if(a[i]==0 and a[i+26]==0):
            f=1
            break
    #print(a)
    if(f==0):
        print('YES')
    else:
        print('NO')
