a=input()
N=len(a)
n=int(input())
t=int(input())
a=a[n:N]+a[0:n]
while(t>0):
    t=t-1
    for i in range(N):
        if(a[i]==' '):
            continue
        else:
            print(a[i],end=' ')
