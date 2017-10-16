t=int(input())
for i in range(t):
    count=0
    n=int(input())
    a=list(map(int,input().split(" ")))
    for j in range(len(a)):
        count = count | a[j]
    print(count)
