t=int(input())
for I in range(t):
    flag=0
    s1=input()
    s2=input()
    for i in range(len(s1)):
        if(s1[i]!=s2[i] and (s1[i]!='?' and s2[i]!='?')):
            flag=1
            break
    if(flag==0):
        print('Yes')
    else:
        print('No')
        
