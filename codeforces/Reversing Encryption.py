n=int(input())
a=set()
for i in range(1,int(n**0.5)+1):
    if(n%i==0):
        a.add(i)
        a.add(n//i)
a=list(a)
a.sort()
s=input()
for i in range(len(a)):
    s1=''
    for j in range(a[i]-1,-1,-1):
        s1+=s[j]
    for k in range(a[i],len(s)):
        s1+=s[k]
    s=s1[:]
print(s)
