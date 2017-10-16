n,k=map(int,input().split(" "))
s=input().rstrip('\r')
a=[0]*26
for i in s:
    a[ord(i)-97]+=1
flag=0
k=len(s)//2
for i in range(26):
    if(a[i]>k):
        flag=1
        break
if(flag==1):
    print('NO')
else:
    print('YES')
