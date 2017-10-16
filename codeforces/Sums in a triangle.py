t=int(input())
for i in range(t):
    a=[]
    n=int(input())
    for j in range(n):
        b=list(map(int,input().split(" ")))
        a.append(b)
    for j in range(len(a)-2,-1,-1):
        for g in range(len(a[j])):
            a[j][g]+=max(a[j+1][g],a[j+1][g+1])
    print(a[0][0])
            
