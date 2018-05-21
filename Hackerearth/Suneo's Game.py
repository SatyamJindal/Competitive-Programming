n=int(input())
a=[]
for i in range(n):
    s=input()
    s=list(s)
    s.sort()
    s1=''
    for j in s:
        s1+=j
    a.append(s1)
a.sort()
max1=0
c=1
for i in range(len(a)-1):
    if(a[i]==a[i+1]):
        c+=1
    else:
        max1=max(max1,c)
        c=1
max1=max(c,max1)
print(max1)
