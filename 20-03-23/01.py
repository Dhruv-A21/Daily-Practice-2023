n=int(input())
ls=list(map(int,input().split()))
for i in range(n):
    print(ls[i]%2,end=' ')
