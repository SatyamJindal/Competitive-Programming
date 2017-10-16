s=input()
count=0
while(len(s)!=1):
    count+=1
    a=0
    for i in range(len(s)):
        a+=int(s[i])
    s=str(a)
print(count)
