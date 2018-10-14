n=int(input())
s=input()
cnt = [0]*26
for i in s:
    cnt[ord(i)-97]+=1
for i in range(len(cnt)):
    print(cnt[i]*chr(97+i),end='')
