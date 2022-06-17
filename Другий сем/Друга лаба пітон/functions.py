class Human():
    def __init__ (self, name, date_of_birth):
        print("\nВведіть ПІБ людини: ")
        self.name = input(name)
        print("\nВведіть дату народження людини(у форматі ДД-ММ-РРРР): ")
        self.date_of_birth = input(name)

def input_amount():
    print("Введіть кількість людей: ")
    amount = input()
    return int(amount)

def init_arr(amount):
    arr = []
    for i in range(0, amount):
        arr.append(Human("",""))
    return arr

def output_info_from_array(amount, arr):
    for i in range(0, amount):
        print("\nПІБ людини №", i+1 ,": " , arr[i].name , "\nДата народження людини: №", i+1 ,": ", arr[i].date_of_birth)

def extruder(amount, arr):
    for i in range(0, amount):
        arr_date = arr[i].date_of_birth.split("-")
        sum_day = 0
        sum_month = 0
        sum_year = 0
        day = int(arr_date[0]) 
        month = int(arr_date[1]) 
        year = int(arr_date[2]) 
        while (day > 0):
            digit = day % 10
            sum_day += digit
            day = day // 10
        while (month > 0):
            digit = month % 10
            sum_month += digit
            month = month // 10
        while (year > 0):
            digit = year % 10
            sum_year += digit
            year = year // 10
        if (sum_day%7 == sum_month%7 and sum_month%7 == sum_year%7):
            print("\nЛюдина №", i+1, " народилася у щасливу дату!")
