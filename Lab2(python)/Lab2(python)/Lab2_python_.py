import math
x=float(input("Введіть x= "))

if x<=-1:
    y=float(1/pow(x,2))
    print("y= ",y)
elif -1<x<2:
    y=float(pow(x,2))
    print("y= ",y)
else:
    y=int(4)
    print("y= ",y)