def gcd(a,b):
    if(b==0):
        return a
    else:
        print('a',b)
        print('b',a%b)
        return(gcd(b,a%b))
t=int(input())
for i in range(t):
    a,b=map(int,input().split(" "))
    print(gcd(a,b))
