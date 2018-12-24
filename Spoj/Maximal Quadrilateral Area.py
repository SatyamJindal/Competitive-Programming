#Brahmagupta's formula
t=int(input())
for I in range(t):
    a,b,c,d=[float(i) for i in input().split()]
    s=(a+b+c+d)/2
    ans= ((s-a)*(s-b)*(s-c)*(s-d))**(0.5)
    print(ans)
