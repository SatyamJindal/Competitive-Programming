n=int(input())
a=[]
for I in range(n):
    s=input()
    b=[0]*26
    for i in s:
        b[ord(i)-97]+=1
    a.append(b)
s1=''
for i in range(26):
    min1=a[0][i]
    for j in range(1,len(a)):
        if(a[j][i]<min1):
            min1=a[j][i]
    #print(min1)
    if(min1>0):
        s1+=chr(97+i)*min1
if(len(s1)==0):
    print('no such string')
else:
    print(s1)
    
