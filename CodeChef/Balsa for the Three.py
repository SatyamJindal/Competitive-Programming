t=int(input())
for I in range(t):
    n=int(input())
    n+=1
    while(1):
        if(str(n).count('3')>=3):
            print(n)
            break
        n+=1
    
