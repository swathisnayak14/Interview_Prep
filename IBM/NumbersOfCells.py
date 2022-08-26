# Input:A1:C8
# Output:24

# which means start from A1 till C8 selected it can be seen ther are 24 cells range
# The cell name on the either side of the seperating : cannot be same
# E10:E10 is an invalid from ,so output is invalid

Que="A1:C8"
p=Que.split(":")
a=p[0][0]
b=p[1][0]

c=p[0][1]
d=p[1][1]

if(a==b and c==d):
    print("Invalid")

else:
    m=abs(int(c)-int(d))+1 #+1 because we are including that cell also
    n=abs(ord(a)-ord(b))+1
    print(m*n)