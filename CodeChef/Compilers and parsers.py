t=int(input())
for I in range(t):
    s=input()
    t1=0
    ans=0
    for i in range(len(s)):
        if(s[i]=='<'):
            t1+=1
        else:
            t1-=1
            if(t1==0):
                ans=max(ans,i+1)
            elif(t1<0):
                break
    print(ans)
