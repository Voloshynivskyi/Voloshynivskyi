from Matrix2 import Matrix2
from Matrix3 import Matrix3

A = Matrix3()
B = Matrix2()

A.EnterMatrix()
B.EnterMatrix()

print(f"Сума членів першої матриці: {A.Sum()}")
print(f"Визначник першої матриці: {A.Det()}")
print(f"Визначник другої матриці: {B.Det()}")

print(f"Сума елементів першої матриці + Визначник першої матриці + Визначник другої матриці = {A.Sum() + A.Det() + B.Det()}")