t=int(input())
for I in range(t):
    s=input()
    if(s[::-1]==s):
        print('YES')
    else:
        print('NO')
