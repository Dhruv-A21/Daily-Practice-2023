for _ in range(int(input())):
    n = int(input())
    s = input()
    ns = ""
    current = ""
    for i in s:
        if(current != i):
            ns += i
            current = i 
    
    if (ns == "0" or ns == "1"):
        print(1)
    
    else:
        internalmaxnodes = ns.count("01")

        if(len(ns) > 1 and ns[0] == "1"):
            internalmaxnodes += 1
        if(len(ns) > 1 and ns[-1] == "0"):
            internalmaxnodes += 1
        print(internalmaxnodes)
