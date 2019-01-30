t=int(input())
for I in range(t):
    s=input()
    max_len=1
    start=0
    for i in range(1,len(s)):
        lo=i-1
        hi=i
        while((lo>=0 and hi<len(s)) and s[lo]==s[hi]):
            if(hi-lo+1>max_len):
                max_len = hi-lo+1
                start=lo
            lo-=1
            hi+=1
        lo=i-1
        hi=i+1
        while((lo>=0 and hi<len(s)) and (s[lo]==s[hi])):
            if(hi-lo+1>max_len):
                max_len = hi-lo+1
                start=lo
            lo-=1
            hi+=1
    print(s[start:start+max_len])
