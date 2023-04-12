n=int(input())
a=(2**n)-1
c=0
for i in range(1,a+1):
    s=bin(i)
    if('11' not in s):
        c=c+1

print(c)
