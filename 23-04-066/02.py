a,b=map(int,input().split("x"))
c=0
for i in range (a):
    for j in range (b):
        if((i+j)%2==1):
            c=c+1
print(c)
        
