t=int(input())
for I in range(t):
    a,b=[int(i) for i in input().split()]
    print(((a%3)*(b%3))%3)
