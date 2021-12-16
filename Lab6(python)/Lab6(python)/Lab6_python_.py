def kk(a, p, n, stepin):
    x = a
    for i in range(0, n):
        x = (1 / p) * (a / pow(x, p - 1) + (p - 1) * x)
    x = pow(x, stepin)
    return x

def factorial(x):
    fac = 1
    for i in range(2, x + 1):
        fac *= i
    return fac
        
def resultat(k, m, n):
    y = (factorial(k) / factorial(m)) * kk(k, 3, n, 2) - pow(m, 2) * kk(k, 5, n, 3)
    return y

k = int(input('k = '))
m = int(input('m = '))
n = int(input('n = '))
print(resultat(k, m, n))

