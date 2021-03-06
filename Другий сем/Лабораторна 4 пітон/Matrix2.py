from TMatrix import TMatrix

class Matrix2(TMatrix):
    def __init__(self):
        super().__init__(2)

    def Det(self):
        return self.matrix[0][0] * self.matrix[1][1] - self.matrix[0][1] * self.matrix[1][0]
