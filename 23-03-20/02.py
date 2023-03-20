v="['a','e','i','o','u']"
for _ in range (int(input())):
    N=int(input())
    s=input()
    c=0
    flag=False
    for i in range (N):
        if(s[i] not in v):
            c=c+1
        else:
            c=0
        if(c>=4):
            flag=True
            break
    if(flag):
        print("NO")
    else:
        print("YES")
    
