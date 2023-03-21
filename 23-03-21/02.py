ls=list(input().split(","))
w=[]
ans=[]
max=0
for i in ls:
    if(i not in w):
        w.append(i)
        c=ls.count(i)
        if(max<c):
            max=c
for i in w:
    if(ls.count(i)==max):
        ans.append(i)
ans.sort()
print(ans[0])
