n=int(input())
s=input()
c=0
c1=0
for i in range(len(s)):
    if(s[i]=='0'):
        c+=1
    else:
        c1+=1
print(abs(c-c1))
