t=int(input())
for i in range(t):
    s=input().rstrip('\r')
    if(s.count('A')==2):
        print('A')
    elif(s.count('B')==2):
        print('B')
    else:
        print('-1')
