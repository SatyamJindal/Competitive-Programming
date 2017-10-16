t=int(input())
for i in range(t):
    a,b=map(str,input().split(" "))
    if(b=='INDIAN'):
        sum1=0
        for g in range(int(a)):
            c=list(map(str,input().split(" ")))
            if(c[0]=='CONTEST_WON'):
                sum1+=300
                if(int(c[1])<21):
                    sum1+=20-int(c[1])
            elif(c[0]=='TOP_CONTRIBUTOR'):
                sum1+=300
            elif(c[0]=='BUG_FOUND'):
                if(int(c[1])>49):
                    sum1+=int(c[1])
            else:
                sum1+=50
        #print('sum1',sum1)
        print(sum1//200)
    else:
        sum1=0
        for g in range(int(a)):
            c=list(map(str,input().split(" ")))
            if(c[0]=='CONTEST_WON'):
                sum1+=300
                if(int(c[1])<21):
                    sum1+=20-int(c[1])
            elif(c[0]=='TOP_CONTRIBUTOR'):
                sum1+=300
            elif(c[0]=='BUG_FOUND'):
                if(int(c[1])>49):
                    sum1+=int(c[1])
            else:
                sum1+=50
        print(sum1//400)
        
                
                
            
