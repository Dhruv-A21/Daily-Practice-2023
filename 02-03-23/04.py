import math
a=int(input())
dig=(int(math.log2(a)))+1
for i in range (0,a+1):
    s=bin(i)
    p=s[2:]
    c=len(p)
    print((dig-c)*" ",end="")
    print(p)
