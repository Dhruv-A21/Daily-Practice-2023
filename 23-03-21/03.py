T=int(input())
while(T>0):
    T=T-1
    N=int(input())
    ls=list(map(int,input().split()))
    ls.sort()
    print(ls[N-1]-ls[0])
