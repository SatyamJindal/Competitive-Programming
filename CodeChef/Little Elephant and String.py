k,n=[int(i) for i in input().split()]
k1=[]
n1=[]
for i in range(k):
    s1=input()
    k1.append(s1)
for i in range(n):
    s=input()
    if(len(s)>46):
        print('Good')
    else:
        flag=0
        for i in k1:
            if(s.find(i)==-1):
                flag=0
            else:
                flag=1
                break
        if(flag==1):
            print('Good')
        else:
            print('Bad')
