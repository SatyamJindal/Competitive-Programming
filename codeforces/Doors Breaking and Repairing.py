n,x,y=[int(i) for i in input().split()]
a=[int(i) for i in input().split()]
if(x>y):
    print(n)
else:
    ct=0
    for i in a:
        if(i<=x):
            ct+=1
    print(ct//2 + ct%2)
