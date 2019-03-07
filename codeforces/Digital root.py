n=int(input())
for I in range(n):
    k,x=[int(i) for i in input().split()]
    print(x + (k-1)*9)
