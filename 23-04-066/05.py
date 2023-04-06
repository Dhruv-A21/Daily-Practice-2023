s=""
a=""
while(a!="}"):
    a=input()
    s=s+a
d=eval(s)
m=min(len(v) for v in d.values())
key=0
for i in d:
    if(len(d[i])==m):
        key=i
        break
ls=d[key].copy()
c=1
for i in d:
    if(i!=key):
        for j in d[i]:
            if(j in ls):
                break
        else:
            ls.extend(d[i])
            c=c+1
print(c)
