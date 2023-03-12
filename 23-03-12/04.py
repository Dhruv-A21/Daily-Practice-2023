# cook your dish here
N=int(input())
s=input()
for i in range (N-1,-1,-1):
    if(s[i]=='1'):
        print(N-1-i)
        break
