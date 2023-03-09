a=input()
l=len(a)
if(l%2!=0):
    print("Odd length.")
else:
    for i in range(0,l,2):
        print(a[i+1]+a[i],end="")
