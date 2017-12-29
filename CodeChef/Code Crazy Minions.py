t=int(input())
for I in range(t):
    s=input()
    count=2
    curr_ord=ord(s[0])-96
    for i in range(1,len(s)):
        if((ord(s[i])-96)-curr_ord>=0):
            count+=(ord(s[i])-96)-curr_ord+1
            curr_ord=ord(s[i])-96
        else:
            count+=(26-curr_ord+(ord(s[i])-96))+1
            curr_ord=ord(s[i])-96
        #print('count',count)
    if(count<=11*len(s)):
        print('YES')
    else:
        print('NO')
            
    
    
