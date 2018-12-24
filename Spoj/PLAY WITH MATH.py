def gcd(a,b):
    if(a==0):
        return b
    return gcd(b%a,a)


t=int(input())
for I in range(t):
    a,b=[int(i) for i in input().split()]
    val = gcd(a,b)
    lcm = (a*b)//val
    x = lcm//a
    y = lcm//b
    print(x,y)
