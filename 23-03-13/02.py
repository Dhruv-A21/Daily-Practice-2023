a=input()
N=len(a)
if(N%2!=0):
    print("Odd length.")
else:
    for i in range (0,N,2):
        print(a[i+1]+a[i],end='')
