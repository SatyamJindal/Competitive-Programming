n=int(input())
a=[]
b=[0]*26
for i in range(n):
    s=input().rstrip('\r')
    a.append(s)
c=set(a[0])&set(a[1])
for j in range(2,len(a)):
    c&=set(a[i])
c=list(c)
if(len(c)==0):
    print('-1')
else:
    for i in range(len(c)):
        b[ord(c[i])-97]+=1
    for i in range(26):
        if(b[i]==1):
            print(chr(97+i),end='')
    

