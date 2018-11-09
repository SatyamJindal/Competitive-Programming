n=int(input())
s=input()
if(len(set(s))==1):
    print('NO')
else:
    for i in range(len(s)-1):
        if(s[i]!=s[i+1]):
            print('YES')
            print(s[i]+s[i+1])
            break
    
