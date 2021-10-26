import math
a=float(input("Введіть a = "))
x=float(input("Введіть x = "))
e=float(input("Введіть е = "))
y=float((a+x/a)/2)
y1=a
while abs(pow(y,2)-pow(y1,2))>=e:
        y1=y
        y=(y1+x/y1)/2
print("yi = ",y)