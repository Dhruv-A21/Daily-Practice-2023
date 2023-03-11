# cook your dish here
T=int(input())
while(T>0):
    T=T-1
    N=int(input())
    a=input()
    c=a[N-1]
    if(c in a[0:N-1]):
        print("YES")
    else:
        print("NO")
