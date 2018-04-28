s='01'
s1='01'
while(len(s1)<1000):
    for i in range(len(s)):
        if(s[i]=='0'):
            s1+='1'
        else:
            s1+='0'
    s=s1[:]
q = int(input())
for i in range(q):
    print(s1[int(input())])
