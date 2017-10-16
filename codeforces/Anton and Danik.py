n=int(input())
s=input()
c=0
c1=0
for i in range(len(s)):
    if(s[i]=='A'):
        c+=1
    else:
        c1+=1
if(c>c1):
    print('Anton')
elif(c1>c):
    print('Danik')
else:
    print('Friendship')
