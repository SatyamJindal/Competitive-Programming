a=[0]*26
b=[0]*26
s1=input().rstrip('\r')
s2=input().rstrip('\r')
count=0
for i in range(len(s1)):
    a[ord(s1[i])-97]+=1
for i in range(len(s2)):
    b[ord(s2[i])-97]+=1
for i in range(26):
    if(a[i]<=b[i]):
        count+=a[i]
    elif(b[i]<a[i]):
        count+=b[i]
print(count)
