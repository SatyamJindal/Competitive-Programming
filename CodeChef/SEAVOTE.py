t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    val=0
    for i in a:
        if(i!=0):
            val+=1
    if(100<=sum(a) and sum(a)<100+val):
        print('YES')
    else:
        print('NO')
