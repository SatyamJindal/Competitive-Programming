n=int(input())
if(n==1):
    print('NIE')
elif(n & (n-1)==0):
    print('TAK')
else:
    print('NIE')
