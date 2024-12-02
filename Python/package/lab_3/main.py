from functs import vvod
import random


def task_3():
    print('Задание 3. Вставка элемента в одномерный массив')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    insertel, insertind = int(vvod('Введите вставляемый элемент')), int(vvod('Введите индекс вставляемого элемента'))
    arr.insert(insertind, insertel)
    print('Массив с вставленным элементом: ', arr)
    return 0


def task_4():
    print('Задание 4. Определение массива на убывающую монотонность')
    arr = [random.randint(-100, 100) for _ in range(3)]
    print('Сгенерированный массив: ', arr)
    monot = True
    for i in range(len(arr) - 1):
        if not arr[i] > arr[i+1]:
            monot = False
            break
    print(f'Массив {"не " if not monot else ""}монотонен!')
    return 0


def task_5():
    print('Задание 5. Нахождение первого отрицательного элемента')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    if min(arr) >= 0:
        print('Все элементы массива не отрицательны!')
        return 0
    for i in arr:
        if i < 0:
            print(f'Первый отрицательный элемент {i} имеет индекс {arr.index(i)}')
            break
    return 0


def task_6():
    print('Задание 6. Нахождение первого нечетного элемента')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    chethave = False
    for i in arr:
        if i % 2 != 0:
            print(f'Первый нечетный элемент {i} имеет индекс {arr.index(i)}')
            chethave = True
            break

    if not chethave:
        print('Все элементы массива четные!')
    return 0


def task_7():
    print('Задание 7. Нахождение первого положительного элемента')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    if max(arr) <= 0:
        print('Все элементы массива не положительные!')
        return 0
    for i in arr:
        if i > 0:
            print(f'Первый положительный элемент {i} имеет индекс {arr.index(i)}')
            break
    return 0


def task_8():
    print('Задание 8. Нахождение первого четного элемента')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    chethave = False
    for i in arr:
        if i % 2 == 0:
            print(f'Первый четный элемент {i} имеет индекс {arr.index(i)}')
            chethave = True
            break

    if not chethave:
        print('Все элементы массива нечетные!')
    return 0


def task_9():
    print('Задание 9. Сортировка')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    for i in range(len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

    print('Отсортированный массив: ', arr)
    return 0


def task_10():
    print('Задание 10. Сортировка бинарными вставками')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    for i in range(1, len(arr)):
        key = arr[i]
        left = 0
        right = i - 1

        while left <= right:
            mid = left + (right - left) // 2
            if arr[mid] > key:
                right = mid - 1
            else:
                left = mid + 1

        for j in range(i - 1, left - 1, -1):
            arr[j + 1] = arr[j]

        arr[left] = key

    print('Отсортированный массив: ', arr)
    return 0


def task_12():
    print('Задание 12. Сортировка простым обменом (Способ 1)')
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    for i in range(len(arr)):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                t = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = t
    print('Отсортированный массив: ', arr)
    return 0


def stop():
    return 'exit'


def lab_3_start():
    while True:
        newchoice = input('Введите номер подзадания (3 - 10, 12); 0 - выход к выбору лабораторных работ: ')
        if newchoice.isdigit() and (3 <= int(newchoice) <= 10 or int(newchoice) == 12):
            newchoice = int(newchoice)
            if newchoice == 0:
                return 0
            else:
                print(f'Выполнение подзадания номер {newchoice}')
                match newchoice:
                    case 3: task_3()
                    case 4: task_4()
                    case 5: task_5()
                    case 6: task_6()
                    case 7: task_7()
                    case 8: task_8()
                    case 9: task_9()
                    case 10: task_10()
                    case 12: task_12()

                print(f'Завершение выполнения подзадания номер {newchoice}\n')
        else:
            print('Неправильный ввод!')
