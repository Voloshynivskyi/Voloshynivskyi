#Під'єднання модуля з функціями
import functions
#Оголошення відкриття початкового файлу
start_rows_input = open("start_rows.txt",'a',encoding='utf-8')
#Очистка файлу від тексту минулих ініціалізацій програми
start_rows_input = functions.zero_function()
#Введення 3 початкових рядків
start_rows_input = functions.input_start_rows(start_rows_input)
#Виведення початкових рядків у консоль
start_rows_input = functions.input_start_rows_to_file(start_rows_input)
#Виведення довжини рядків
start_rows_input = functions.search_length_of_rows(start_rows_input)
#Перевірка чи містить рядок цифри    
start_rows_input = functions.search_numbers_in_rows(start_rows_input)
#Вибір найбільшої цифри з рядка
start_rows_input = functions.finaly(start_rows_input)