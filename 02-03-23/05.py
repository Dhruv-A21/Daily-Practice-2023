c=input()
d=input()
a=input()
b=input()

if(a=='Paper'):
    if(b=='Rock'):
        print(c,'Win')
    elif(b=='Scissor'):
        print(d,'Win')
elif(a=='Rock'):
    if(b=='Scissor'):
        print(c,'Win')
    elif(b=='Paper'):
        print(d,'Win')
elif(a=='Scissor'):
    if(b=='Paper'):
        print(c,'Win')
    elif(b=='Rock'):
        print(d,'Win')