s1=input().rstrip('\r')
s2=input().rstrip('\r')
flag=0
for i in range(len(s1)):
    if(ord(s1[i])!=ord(s2[i])):
        if((ord(s1[i])-65!=ord(s2[i])-97) and (ord(s1[i])-97!=ord(s2[i])-65)):
            count1=0
            count2=0
            if(ord(s1[i])>64 and ord(s1[i])<91):
                count1+=ord(s1[i])-65
            else:
                count1+=ord(s1[i])-97
            if(ord(s2[i])>64 and ord(s2[i])<91):
                count2+=ord(s2[i])-65
            else:
                count2+=ord(s2[i])-97
            if(count1<count2):
                print('-1')
                flag=1
                break
            elif(count2<count1):
                print('1')
                flag=1
                break
if(flag==0):
    print('0')
                
