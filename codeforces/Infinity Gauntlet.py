n = int(input())
d = {'purple':'Power','green':'Time','blue':'Space','orange':'Soul','red':'Reality','yellow':'Mind'}
a,b = [],[]
for i in d.keys():
    a.append(i)

for i in range(n):
    b.append(input())

print(6-n)
for i in list(set(a)-set(b)):
    print(d[i])
