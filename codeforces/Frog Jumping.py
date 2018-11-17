t=int(input())
for I in range(t):
    a,b,k=[int(i) for i in input().split()]
    ans = (k//2)*(a-b)
    if(k%2):
        ans+=a
    print(ans)
