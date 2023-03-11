a,b=map(int,input().split())
k=int(input())
A= a & b
max=0
if(A>max and A<=k):
    max=A
A= a | b
if(A>max and A<=k):
    max=A
A= a^b
if(A>max and A<=k):
    max=A
print("%d"%(max))
