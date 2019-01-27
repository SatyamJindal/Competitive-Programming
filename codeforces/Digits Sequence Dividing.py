q=int(input())
for I in range(q):
    n=int(input())
    s=input()
    if(len(s)==2 and s[0]==s[1]):
        print('NO')
    else:
        if(int(s[0])>int(s[1:])):
            print('NO')
        else:
            print('YES')
            print(2)
            print(s[0],s[1:])
