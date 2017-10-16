#Binary exponentiation 
x,y=map(int,input().split(" "))
#print(x**y)  #genaral to check time complexity
final_result=1
current_result=x
while(y!=0):
    if(y&1):
        final_result*=current_result
    current_result*=current_result
    y>>=1
print(final_result)
