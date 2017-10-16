t=int(input())
for i in range(t):
    flag=0
    a=[0]*26
    #b=[0]*26
    c1,c2=map(str,input().split(" "))
    c3=c1+c2
    #print('c3',c3)
    n=int(input())
    for j in range(len(c3)):
        a[ord(c3[j])-97]+=1
    #print(a)
    for j in range(n):
        s1=input().rstrip('\r')
        if(flag==0):
            for k in range(len(s1)):
                if(a[ord(s1[k])-97]<=0):
                    flag=1
                    break
                else:
                    a[ord(s1[k])-97]-=1
                    #print(a)
    if(flag==1):
        print('NO')
    else:
        print('YES')
                
        
