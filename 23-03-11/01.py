# cook your dish here
t=int(input())
while t>0:
    s=input()
    n=len(s)
    a=' not '
    if(a in s) or s[n-4:n]==' not' or s[0:4]=='not ' or (n==3 and s[0:3]=='not'):
        print("Real Fancy")
    else:
        print("regularly fancy")
    t=t-1
