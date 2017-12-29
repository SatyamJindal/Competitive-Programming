t=int(input())
for I in range(t):
    n=int(input())
    s=input()
    c=0
    for i in s:
        if(i=='1'):
            c+=1
    print(((c)*(c+1))//2)
