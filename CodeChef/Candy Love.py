t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    if(sum(a)%2==0):
        print('NO')
    else:
        print('YES')
