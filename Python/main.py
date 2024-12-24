from package.lab_1.main import lab_1_start
from package.lab_2.main import lab_2_start
from package.lab_5.main import lab_5_start


while True:
    newchoice = input('Введите номер лабораторной работы; 0 - выход из программы: ')
    if newchoice.isdigit() and (0 <= int(newchoice) <= 3 or int(newchoice) == 5):
        newchoice = int(newchoice)
        if newchoice == 0:
            print('Выход из программы')
            exit()
        else:
            print(f'Выполнение лабораторной работы номер {newchoice}')
            match newchoice:
                case 1: lab_1_start()
                case 2: lab_2_start()
                case 3: lab_3_start()
                case 5: lab_5_start()

            print(f'Завершение выполнения лабораторной работы номер {newchoice}\n')
    else:
        print('Неправильный ввод!')
