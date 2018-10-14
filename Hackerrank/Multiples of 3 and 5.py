t=int(input())
for I in range(t):
    n=int(input())
    mul3 = (((n-1)//3)*(3*(1+((n-1)//3))))//2
    mul5 = (((n-1)//5)*(5*(1+((n-1)//5))))//2
    mul15 = (((n-1)//15)*(15*(1+((n-1)//15))))//2
    print(mul3+mul5-mul15)
