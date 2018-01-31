t=int(input())
for I in range(t):
    a=[0]*26
    b=[0]*26
    y_n=0
    s1,s2=[str(i) for i in input().split()]
    flag=0
    for i in range(len(s1)):
        a[ord(s1[i])-97]+=1
    for i in range(len(s2)):
        b[ord(s2[i])-97]+=1
    for i in range(26):
        if(a[i]!=b[i]):
            flag=1
            break
    if(set(s1)!=set(s2)):
        y_n=1
    if(y_n==1 and flag==1):
        print('YES')
    elif(y_n==0 and flag==0):
        print('YES')
    else:
        print('NO')
