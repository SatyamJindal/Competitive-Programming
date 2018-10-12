t=int(input())
for I in range(t):
    L,v,l,r=[int(i) for i in input().split()]
    tot = L//v
    if(l%v==0):
        small = (l//v)
    else:
        small = ((l//v)+1)
    if(r%v==0):
        large = r//v
    else:
        large = r//v
    print(tot-(large-small+1))
