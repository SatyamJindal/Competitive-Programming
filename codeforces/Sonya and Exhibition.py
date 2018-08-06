n , m = [int(c) for c in input().split()]
s1, s2 = [], []

for i in range(n):
    s2.append(i&1)
    s1.append((i+1)&1)
b1 = 0
b2 = 0
for i in range(m):
    l, r = [int(c) for c in input().split()]
    b1 += s1[l-1:r].count(1)*s1[l-1:r].count(0)
    b2 += s2[l-1:r].count(1)*s2[l-1:r].count(0)
if b1>b2:
    print(*s1,sep='')
else:
    print(*s2,sep='')
