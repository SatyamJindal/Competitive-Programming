t=int(input())
for I in range(t):
    n=int(input())
    a=[0]*((n//2)+1)
    for i in range(n):
        a[int(input())-1]+=1
    for j in range(len(a)):
        if(a[j]<2):
            print(j+1)
            break
    
    
