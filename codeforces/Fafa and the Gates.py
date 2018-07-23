n=int(input())
s=input()
r=0
u=0
count=0
down=0
if(s[0]=='R'):
    r+=1
    down=1
else:
    u+=1
for i in range(1,len(s)):
    if(s[i]=='R'):
        r+=1
    else:
        u+=1
    if(r-u==1 and down!=1):
        count+=1
        down=1
    if(u-r==1 and down!=0):
        count+=1
        down=0
print(count)
