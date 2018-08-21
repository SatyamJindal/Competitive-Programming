for i in range(int(input())):
    n = int(input())
    s = input()
    final=''
    flag=0
    for i in range(len(s)//2):
        if(abs(ord(s[i])-ord(s[len(s)-i-1])) not in [0,2]):
            flag=1
            break
    if(flag):
        print('NO')
    else:
        print('YES')
        
