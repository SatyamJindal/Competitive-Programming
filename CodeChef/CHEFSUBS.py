n,k,p=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
s=input()
print(a)
b=a
for i in range(len(s)):
    if(s[i]=='?'):
        c=[]
        for j in range(len(b)-k+1):
            count=0
            for g in range(j,j+k):
                if(b[g]==1):
                    count+=1
            c.append(count)
        print(max(c))
    elif(s[i]=='!'):
        d=[]
        d.append(b[len(b)-1])
        for k in range(len(b)-1):
            d.append(b[k])
        b=d

