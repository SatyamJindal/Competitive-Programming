a=int(input())
if(a==0 or a==1):
    print('yes')
else:
    if((a%3==0) or (a%6==0) or (a%6==1)):
        print('yes')
    else:
        print('no')
