a=''
for j in range(5):
    for I in range(25,-1,-1):
        a+=chr(97+I)
t=int(input())
for I in range(t):
    n=int(input())
    print(a[:n+1])
