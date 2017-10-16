n,q=map(int,input().split(" "))
a=list(map(int,input().split(" ")))
for i in range(q):
    b=list(map(int,input().split(" ")))
    if(b[0]==1):
        k=b[2]
        cur_max=a[b[1]-1]
        curr_ind=b[1]-1
        for j in range(curr_ind+1,len(a)):
            if(j-curr_ind>100 or k==0):
                break
            if(a[j]>cur_max):
                cur_max=a[j]
                curr_ind=j
                k-=1
        #print('cur_max',cur_max)
        print(curr_ind+1)
    elif(b[0]==2):
        for j in range(b[1]-1,b[2]):
            a[j]+=b[3]
    #print(a)
            
            
