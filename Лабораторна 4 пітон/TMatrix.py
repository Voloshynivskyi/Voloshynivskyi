class TMatrix():
    def __init__(self, size):
        self.size = size
        self.matrix = []

    def EnterMatrix(self):
        print(f"Введіть матрицю {self.size}x{self.size} рядок за рядком:")
        for i in range(self.size):
            self.matrix.append(list(map(int, input().split())))

    def PrintMatrix(self):
        for i in range(self.size):
            for j in range(self.size):
                print(self.matrix[i][j], end = " ")
            print()

    def Sum(self):
        result = 0
        for i in range(self.size):
            for j in range(self.size):
                result += self.matrix[i][j]
        return result

    def Det():
        pass
