t=int(input())
for I in range(t):
    s=input()
    count=0
    for i in range(len(s)-3):
        a=[]
        if((s[i]=='c' or s[i]=='h' or s[i]=='e' or s[i]=='f') and (s[i+1]=='c' or s[i+1]=='h' or s[i+1]=='e' or s[i+1]=='f') and (s[i+2]=='c' or s[i+2]=='h' or s[i+2]=='e' or s[i+2]=='f') and (s[i+3]=='c' or s[i+3]=='h' or s[i+3]=='e' or s[i+3]=='f')):
            a.append(s[i])
            a.append(s[i+1])
            a.append(s[i+2])
            a.append(s[i+3])
        if(len(set(a))==4):
            count+=1
    if(count==0):
        print('normal')
    else:
        print('lovely',count)
            
