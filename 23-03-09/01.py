a=input()
b=int(input())
c=int(input())
d=a[b:]+a[0:b]
for i in range(c):
    for j in range(len(d)):
        if(d[j]==' '):
            continue
        else:
            print(d[j],end=' ')
    
