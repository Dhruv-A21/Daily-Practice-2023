x=1000
c=[]
for i in range (1,x+1):
    if(i%3!=0 and i%10!=3):
        c.append(i)
s=int(input())
print(c.pop(s-1))
