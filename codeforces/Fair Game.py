n=int(input())
a=[]
for i in range(n):
    a.append(int(input()))
if(len(set(a))>2):
    print('NO')
else:
    hsh=[0]*101
    for i in a:
        hsh[i]+=1
    flag=0
    for i in range(len(hsh)):
        if(hsh[i]!=0):
            for j in range(i+1,len(hsh)):
                if(hsh[j]==hsh[i]):
                    print('YES')
                    print(i,j)
                    flag=1
                    break
    if(flag==0):
        print('NO')
            
