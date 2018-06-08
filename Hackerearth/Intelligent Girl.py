s=input()
even = [0]*(len(s))
c=0
for i in range(len(s)-1,-1,-1):
    if(int(s[i])%2==0):
        c+=1
    even[i]=c
print(*even)
