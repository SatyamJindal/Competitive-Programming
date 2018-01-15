t=int(input())
for I in range(t):
    a=[int(i) for i in input().split()]
    a.sort()
    if(a[0]==a[1] and a[2]==a[3]):
        print('YES')
    else:
        print('NO')
        
