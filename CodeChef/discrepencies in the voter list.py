n1,n2,n3=map(int,input().split(" "))
a=[]
b=[]
c=[]
d=[]
for i in range(n1):
    a.append(int(input()))
for i in range(n2):
    b.append(int(input()))
for i in range(n3):
    c.append(int(input()))
for i in (set(a)&set(b)):
    d.append(i)
for i in (set(b)&set(c)):
    d.append(i)
for i in (set(a)&set(c)):
    d.append(i)
e=list(set(d))
e.sort()
print(len(e))
for i in e:
    print(i)
