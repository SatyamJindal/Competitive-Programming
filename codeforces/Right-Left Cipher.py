s=input()
ans=''
l=0
r=len(s)-1
if(len(s)%2==0):
    t=1
else:
    t=0
while(l<=r):
    if(l==r):
        ans+=s[l]
    elif(t==1):
        ans+=s[r]+s[l]
    else:
        ans+=s[l]+s[r]
    r-=1
    l+=1
print(ans[::-1])
        
    
