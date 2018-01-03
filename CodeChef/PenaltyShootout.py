while(1):
    try:
        a=input()
    except:
        break
    #test.append(play)
    chef=0
    ch_ch=5
    ch_ot=5
    other=0
    mini=0
    left=10
    f_t=0
    for i in range(10):
        if(i%2==0):
            if(a[i]=='1'):
                chef+=1
            ch_ch-=1
        elif(i%2!=0):
            if(a[i]=='1'):
                other+=1
            ch_ot-=1
        #left-=1
        #mini+=1
        if(chef-other>ch_ot or other-chef>ch_ch):
            f_t=1
            mini+=1
            break
        mini+=1
    if(f_t==0):
        count=0
        che_n=0
        oth_n=0
        for i in range(10,20):
            if(i%2==0 and a[i]=='1'):
                che_n+=1
            elif(i%2!=0 and a[i]=='1'):
                oth_n+=1
            count+=1
            mini+=1
            if(count==2 and (abs(che_n-oth_n)>0)):
                break
            elif(count==2):
                count=0
                che_n=0
                oth_n=0
        if(che_n>oth_n):
            print('TEAM-A',end=' ')
            print(mini)
        elif(oth_n>che_n):
            print('TEAM-B',end=' ')
            print(mini)
        else:
            print('TIE')
    else:
        if(chef>other):
            print('TEAM-A',end=' ')
            print(mini)
        else:
            print('TEAM-B',end=' ')
            print(mini)
