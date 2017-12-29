t=int(input())
for I in range(t):
    s=input()
    count=1
    fin_count=0
    p1=0
    p2=len(s)-1
    flag=0
    while(p1<=p2):
        if(s[p1]!=s[p2] and (s[p1]!='?' and s[p2]!='?')):
            count=0
            break
        elif(s[p1]==s[p2] and s[p1]=='?'):
            count=(count*26)%(10**9+7)
        p1+=1
        p2-=1
    print(count%(10**9+7))
