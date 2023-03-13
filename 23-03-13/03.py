a=input()
N=len(a)
count=0
flag=0
for i in range (N):
    if(a[i]=='('):
        count=count+1
    else:
        count=count-1
    if(count<0):
        flag=1
        break
if(flag==1 or count!=0):
    print("'False'")
else:
    print("'True'")
