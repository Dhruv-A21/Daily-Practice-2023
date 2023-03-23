T=int(input())
while(T>0):
    T=T-1
    N=int(input())
    s=list()
    J=N
    while(N>0):
        N=N-1
        s.append(input())
    c=0
    N=J
    for j in range (10):
        d=0
        for i in range (N):
            if(s[i][j]=='1'):
                d=d+1
        if(d%2==1):
            c=c+1
    print(c)
