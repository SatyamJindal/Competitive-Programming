t=int(input())
a=[]
for i in range(100,200):
    a.append(i)
for i in range(t):
    n=int(input())
    for j in range(n):
        print(a[j],end=' ')
    print()
