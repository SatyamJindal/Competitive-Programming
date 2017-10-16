t=int(input())
for i in range(t):
    flag=0
    flag1=0
    flag2=0
    index=0
    index1=0
    s=input().rstrip('\r')
    for g in range(len(s)):
        if(s[g]=='1'):
            flag=1
            index=g
            break
    if(flag==0):
        print('NO')
    else:
        for j in range(index+1,len(s)):
            if(s[j]=='0'):
                index1=j
                flag1=1
                break
        if(flag1==0):
            print('YES')
        else:
            for k in range(index1+1,len(s)):
                if(s[k]=='1'):
                    print('NO')
                    flag2=1
                    break
            if(flag2==0):
                print('YES')
                
        
