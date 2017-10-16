def gcd(x,y):
    if(x==0):
        return y
    else:
        return gcd(y%x,x)
x,y=map(int,input().split(" "))
print(gcd(x,y))
