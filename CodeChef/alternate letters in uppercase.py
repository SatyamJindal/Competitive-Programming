a=list(map(str,input().split(" ")))
c=[]

for i in a:
    s=''
    for b in range(len(i)):
        if(b%2==0):
            if(ord(i[b])>=97):
                s+=str(chr(ord(i[b])-32))
            else:
                s+=i[b]
        else:
            if(ord(i[b])>64 and ord(i[b])<90):
                s+=str(chr(ord(i[b])+32))
            else:
                s+=i[b]
    c.append(s)
for i in c:
    print(i,end=' ')
