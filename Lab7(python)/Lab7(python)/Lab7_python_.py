def imya():
    N = int(input("Введіть n: "))
    return N

N = imya()

def Vvid(n):
    A = [0] * n
    for i in range(0, n):
        A[i] = float(input())
    return A


def poshuk(*args):
    A = args[0]
    n = args[-1]
    minimal = A[0]
    maximal = A[0]
    min_index = 0
    max_index = 0
    for i in range(0, n):
        if A[i] > maximal:
            maximal = A[i]
            max_index = i
        elif A[i] < minimal:
            minimal = A[i]
            min_index = i
    A[max_index] = minimal
    A[min_index] = maximal
    return A
print(poshuk(Vvid(N), N))
print("      ^         ")
print("      |         ")
print("      |         ")
print("Rezultuyuchii masive")
