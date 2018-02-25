jc,sc,mo = [int(i) for i in input().split()]
if(((mo-jc)//sc)%2==1):
    print('Unlucky Chef')
else:
    print('Lucky Chef')
