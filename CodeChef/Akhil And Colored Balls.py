t=int(input())
for i in range(t):
    x=input().rstrip('\r')
    y=input().rstrip('\r')
    z=''
    for g in range(len(x)):
        if((x[g]=='W' and y[g]=='W')):
           z+='B'
        elif(x[g]=='B' and y[g]=='B'):
            z+='W'
        elif((x[g]=='B' and y[g]=='W') or (x[g]=='W' and y[g]=='B')):
             z+='B'
    print(z)
