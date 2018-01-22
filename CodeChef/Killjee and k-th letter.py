s=input()
q=int(input())
a=[]
for i in range(len(s)):
    d=''
    for j in range(i,len(s)):
        d+=s[j]
        a.append(d)
print(a)
a.sort()
s1=''
for i in a:
    s1+=i
g=0
for i in range(q):
    p,m=[int(i) for i in input().split()]
    k=((p*g)%m)+1
    print(s1[k-1])
    g+=ord(s1[k-1])
