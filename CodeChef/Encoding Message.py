a=[]
for i in range(25,-1,-1):
    a.append(chr(97+i))
t=int(input())
for I in range(t):
    n=int(input())
    s=list(input())
    for i in range(1,len(s),2):
        s[i-1],s[i]=s[i],s[i-1]
        s[i-1]=a[ord(s[i-1])-97]
        s[i]=a[ord(s[i])-97]
    if(len(s)%2!=0):
        s[-1]=a[ord(s[-1])-97]
    print(''.join(s))
