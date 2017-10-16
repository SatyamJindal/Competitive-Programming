a=[0]*26
s=input()
s1=input()
for i in range(len(s)):
    a[ord(s[i])-97]+=1
#print('a',a)
t=int(input())
for i in range(t):
    count1=0
    flag1=0
    flag2=0
    flag=0
    s2=input()
    p=0
    if(len(s1)<=len(s2)):
        p=len(s1)
    else:
        p=len(s2)
    for j in range(p):
        #print('j',j)
        if(s1[j]!=s2[j] and (s1[j]!='?' and s1[j]!='*')):
            flag=1
            #print('1')
            break
        elif(s1[j]=='?'):
            if(a[ord(s2[i])-97]==0):
                flag=1
               # print('2')
                break
        elif(s1[j]=='*'):
            #print('3')
            flag1=1
            flag2=j
        if(flag1==1 and a[ord(s2[j])-97]>0):
            #print('4')
            count1+=1
        if(count1==len(s2)-j+1):
            #print('5')
            flag=1
            break
    if(flag==0):
        print('YES')
    elif(flag==1):
        print('NO')
        
        
    
