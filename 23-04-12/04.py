l=list(map(int,input().split()))
n=len(l)
p=0
j=0
flag=False
f=n-1
if(n==1):
    flag=True
else:
    while(p<n-1 and l[p]!=0):
        j=l[p]
        p=p+j
    if(p>=f):
        flag=True
print(flag)
