while(1):
    try:
        n=int(input())
        if(n==0 or n==1):
            print(n)
        else:
            print(2*(n-1))
    except:
        break
