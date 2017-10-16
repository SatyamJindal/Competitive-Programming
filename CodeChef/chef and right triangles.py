t=int(input())
count=0
for T in range(t):
    a,b,c,d,e,f=map(int,input().split(" "))
    g=(a-c)**2+(b-d)**2
    h=(a-e)**2+(b-f)**2
    i=(c-e)**2+(d-f)**2
    if(g+h==i or h+i==g or g+i==h):
        count+=1
print(count)
    
