mod = 10**9+7
t=int(input())
for I in range(t):
    n=int(input())
    if(n==1):
        print(0)
    else:
        c = (((n)*(n-1))//2) - 1
        print(pow(2,c,mod))
