def ans(n,t):
    no_t=t//n
    return(((n)*(no_t)*(no_t+1))//2)
t=int(input())
print(ans(3,t)+ans(5,t)-ans(15,t))
    
