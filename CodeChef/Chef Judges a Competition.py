t=int(input())
for I in range(t):
    n=int(input())
    a=[int(i) for i in input().split()]
    b=[int(i) for i in input().split()]
    alice=sum(a)-max(a)
    bob=sum(b)-max(b)
    if(alice>bob):
        print('Bob')
    elif(bob>alice):
        print('Alice')
    else:
        print('Draw')
