a=eval(input())
b=eval(input())
l=len(a)
q=len(b)
c=0
for i in range(l):
    d=sorted(a[i])
    for j in range(q):
        e=sorted(b[j])
        if(d==e):
            c=c+1
print(c)
