t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    a.sort()
    count1=0
    for j in range(len(a)-1,-1,-2):
        count1+=a[j]
    print(count1)
