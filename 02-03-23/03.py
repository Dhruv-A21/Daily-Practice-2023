a=int(input())
b=int(input())
for i in range ((a//2)+1):
    j=a-i
    if((i^j)==b):
        print(i,j)
        
