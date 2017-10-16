t=int(input())
for i in range(t):
    s=input()#.rstrip('\r')
    curr=1
    max1=1
    for i in range(len(s)):
        if(s[i]=='<'):
           curr+=1
           if(curr>max1):
               max1+=1
        elif(s[i]=='>'):
            if(curr==1):
                max1+=1
            elif(curr>1):
                curr-=1
    print(max1)
                
           
            
                    
