t=int(input())
for I in range(t):
    a,b=[int(i) for i in input().split()]
    if(a%2==0 or b%2==0):
        print('Tuzik')
    else:
        print('Vanka')
