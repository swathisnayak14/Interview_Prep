def lastword(string):
    newstring=""
    length=len(string)
    for i in range(length-1,0,-1):
        if(string[i]==" "):
            return newstring[::-1]
        else:
            newstring=newstring+string[i]


string="Good Morning. How are you doing"
print(lastword(string))