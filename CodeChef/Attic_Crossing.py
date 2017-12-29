t=int(input())
for I in range(t):
    s=input()
    days=0
    max_j=0
    fb=0
    for i in s:
        if(i=='.'):
            fb+=1
        if(i=='#' and fb!=0):
            if(max_j<fb):
                max_j=fb
                days+=1
            fb=0
    print(days)
        
        
            
