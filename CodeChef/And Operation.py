n=int(input())
max1=0
a=[]
for i in range(n):
    a.append(int(input()))
a.sort()
for i in range(len(a)-1):
    max1=max(max1,a[i]&a[i+1])
print(max1)
