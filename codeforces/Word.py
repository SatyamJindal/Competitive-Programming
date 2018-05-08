s=input()
lo=0
up=0
for i in s:
    if(ord(i)>96):
        lo+=1
    else:
        up+=1
if(up>lo):
    print(s.upper())
else:
    print(s.lower())
