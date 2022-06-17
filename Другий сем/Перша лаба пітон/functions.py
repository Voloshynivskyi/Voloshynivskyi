
#Очистка файлу від тексту минулих ініціалізацій програми
def zero_function():
    file_open = open("start_rows.txt",'w',encoding='utf-8') 
    file_open.write("")
    file_open1 = open("final_rows.txt",'w',encoding='utf-8') 
    file_open1.write("")
#Введення 3 початкових рядків
def input_start_rows(start_rows_input):
    start_rows_input = open("start_rows.txt",'a',encoding='utf-8')
    print("Введіть 3 рядки:\n");
    a =""
    one_line = ""
    for i in range(0,3):
        print("Введіть рядок № ",i+1,":")
        one_line = input(a)
        #частина циклу яка відповідає за записування рядків у файл
        start_rows_input.write(one_line)
        start_rows_input.write("\n")
    return start_rows_input

#Виведення початкових рядків у консоль
def input_start_rows_to_file(start_rows_input):
    start_rows_input = open("start_rows.txt",'r',encoding='utf-8')
    for i in range(0,3):
        print("Початковий рядок № ", i+1 , ":\n",start_rows_input.readline()) 
    return start_rows_input

#Виведення довжини рядків
def search_length_of_rows(start_rows_input):
    start_rows_input.seek(0);
    for i in range(0,3):
        length_of_current_line = len(start_rows_input.readline())-1 
        print("Довжина рядка №",i+1,":",length_of_current_line)
    return start_rows_input

#Перевірка чи містить рядок цифри

def search_numbers_in_rows(start_rows_input):
    start_rows_input.seek(0);
    n=0;
    for i in range(0,3):
        one_symbol=start_rows_input.read(1)
        if one_symbol=="\n":
            one_symbol = start_rows_input.read(1)
        while one_symbol!="\n": 
            if one_symbol.isdigit():
                print("Рядок №", i+1, "містить цифри.")
                while one_symbol!="\n":
                    one_symbol = start_rows_input.read(1)
                break 
            else:
                one_symbol=start_rows_input.read(1);
    return start_rows_input

#Вибір найбільшої цифри з рядка
def finaly(start_rows_input):
    final_rows_input = open("final_rows.txt",'a',encoding='utf-8')
    start_rows_input.seek(0);
    array_of_numbers = []
    for i in range(0,3):
        array_of_numbers = []
        one_symbol=start_rows_input.read(1)
        if one_symbol=="\n":
            one_symbol = start_rows_input.read(1)
        while one_symbol!="\n":
            number = ''
            if one_symbol.isdigit():
                while one_symbol.isdigit():
                    number += one_symbol
                    one_symbol = start_rows_input.read(1)
                array_of_numbers.append(int(number))
            else:
                one_symbol = start_rows_input.read(1)
        if len(array_of_numbers) != 0:
            final_rows_input.write(str(max(array_of_numbers)))
            print(max(array_of_numbers), " - Максимальне число рядка №", i+1, "\n")
            array_of_numbers.remove(max(array_of_numbers))
            for i in range(0,len(array_of_numbers)):
                final_rows_input.write(", ")
                final_rows_input.write(str(array_of_numbers[i]))
            final_rows_input.write("\n")
        else:
            print("Рядок №",i+1, " не містить цифр\n")
    return start_rows_input