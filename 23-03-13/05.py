h=int(input())
m=int(input())
for i in range (0,h):
    print((h-1-i)*' ',end='')
    if(i==0):
        print("*")
    elif(i==m-1):
        print(((2*i)+1)*'*')
    else:
        print('*'+((2*i)-1)*' '+'*')
        
