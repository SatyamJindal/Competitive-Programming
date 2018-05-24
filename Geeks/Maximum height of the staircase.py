t=int(input())
for I in range(t):
    n=int(input())
    c=1
    while(((c*(c+1))//2)<=n):
        c+=1
    print(c-1)
