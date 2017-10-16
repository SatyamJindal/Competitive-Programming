n=int(input())
count1=n-1
count2=n
for i in range(2*n):
    s=''
    for j in range(2*n):
        if(j==count1):
            s+='/'
            count1-=1
        if(j==count2):
            s+='\\'
            count2+=1
        else:
            s+='*'
    print(s)
