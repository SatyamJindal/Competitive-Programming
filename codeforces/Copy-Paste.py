t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    print(len(set(a)))
