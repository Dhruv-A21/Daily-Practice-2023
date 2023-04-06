d=eval(input())
s1=[]
s2=[]
for i in d:
    a=d[i]
    if(a>40 or a<20):
        s1.append(i)
    else:
        s2.append(i)
s1.sort()
s2.sort()
out=f'''[
 {s1},
 {s2}
]
'''
print(out)
