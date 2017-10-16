t=int(input())
for i in range(t):
    a=list(map(int,input().split(" ")))
    a.sort()
    if(a[-1]==len(a)-1):
        print(a[-2])
    else:
        print(a[-1])
