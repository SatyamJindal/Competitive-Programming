t=int(input())
for I in range(t):
    n,c=[int(i) for i in input().split()]
    a=[int(i) for i in input().split()]
    if(sum(a)<=c):
        print('Yes')
    else:
        print('No')
