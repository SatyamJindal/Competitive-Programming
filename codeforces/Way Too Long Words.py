t=int(input())
for i in range(t):
    s=input().rstrip('\r')
    if(len(s)<11):
        print(s)
    else:
        a=''
        a+=s[0]+str(len(s)-2)+s[len(s)-1]
        print(a)
