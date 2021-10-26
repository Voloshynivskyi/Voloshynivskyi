import math
n=int(input("Введіть n = "))
S=float(0)
F=int(1)
i=int(1)

while i<=n:
       F=F*i
       S+=1/F
       i=i+1
print("S = ",S) 
