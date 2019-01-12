q=int(input())
for I in range(q):
    l,r,d=[int(i) for i in input().split()]
    if(d<l):
        print(d)
    else:
        mul = ((r//d)+1)*d
        print(mul)
