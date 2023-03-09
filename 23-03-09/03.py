a=input()
count=0
flag=0
for i in range (0,len(a)):
    if(a[i]=='('):
        count=count+1
    elif(a[i]==')'):
        count=count-1
    if(count<0):
        flag=1
        break
if(flag==1 or count!=0):
    print("'False'")
else:
    print("'True'")
