s=input().rstrip('\r')
a=[0]*26
for i in range(len(s)):
    a[ord(s[i])-97]+=1
count=0
for i in range(26):
    if(a[i]>0):
        count+=1
if(count%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
