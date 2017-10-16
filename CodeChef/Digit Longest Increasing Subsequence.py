t=int(input())
for I in range(t):
    n=int(input())
    a=list(map(int,input().split(" ")))
    s=''
    for i in a:
        s+=str(i)
    print(s)
