t=int(input())


def find(x,y):
    curr=x
    final = 1
    while(y):
        if(y&1):
            final = (final*curr)%10
        curr = (curr*curr)%10
        y>>=1
    return final
            


for I in range(t):
    a,b=[int(i) for i in input().split()]
    print(find(a,b))
