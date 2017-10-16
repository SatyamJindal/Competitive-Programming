s=input().rstrip('\r')
c=0
f=0
f1=0
f2=0
f3=0
for i in range(len(s)):
    if(s[i]=='C'):
        f+=1
    elif(s[i]=='H' and f1<f):
        f1+=1
    elif(s[i]=='E' and f2<f1):
        f2+=1
    elif(s[i]=='F' and f3<f2):
        f3+=1
    a=min(f,f2,f2,f3)
    c+=a
    f-=a
    f1-=a
    f2-=a
    f3-=a
print(c)
    
