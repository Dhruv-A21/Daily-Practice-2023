n=input()
coma=n[0]
n=n[1:-1]
ls=list(map(int,n))
a=ls.copy()
p=[2,3,5,7]
print(coma,end="")
for i in p:
    ls=a.copy()
    l=len(ls)
    k=0
    for j in range(l):
        if(i==ls[j]):
            print(a.pop(j-k),end="")
            k=k+1
l=len(a)
for i in range(l):
    print(a[i],end="")
print(coma)
            
        
