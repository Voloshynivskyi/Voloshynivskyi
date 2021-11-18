import math
x=int(200)
y=int(201)
s=int(0)
s1=int(0)
i=int(1)
i1=int(1)

while x<300:
    y=x+1
    while y<300:
        while i<x:
            if x%i==0:
                s=s+i
            i=i+1
        i=1
        while i1<y:
            if y%i1==0:
                s1=s1+i1
            i1=i1+1
        i1=1 
        if s==y and s1==x:
            print("Пара ",x," та ",y," - дружні числа")
        s=0
        s1=0
        y=y+1
    x=x+1