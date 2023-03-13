a=int(input())
N=(2**a)
count=0
for i in range (3,N):
    s=bin(i)
    s=s[2:]
    if("11" in s):
        count=count+1
print(count)
