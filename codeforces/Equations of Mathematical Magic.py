t=int(input())
for I in range(t):
    n=int(input())
    print(2**(bin(n)[2:].count('1')))
