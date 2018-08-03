n=int(input())
s=input()
t=input()
s=list(s)
t=list(t)
final=[]
if(sorted(s)!=sorted(t)):
    print(-1)
else:
    for i in range(len(t)):
        if(t[i]!=s[i]):
            ind=0
            for j in range(i+1,len(t)):
                if(s[j]==t[i]):
                    ind=j
                    break
            while(j!=i):
                final.append(j)
                s[j],s[j-1]=s[j-1],s[j]
                j-=1
    print(len(final))
    print(*final)
