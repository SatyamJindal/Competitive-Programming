t=int(input())
for I in range(t):
    n=int(input())
    c=0
    c+=(n*2)
    n-=1
    c+=(((n)*(n+1))//2)
    print(c)
