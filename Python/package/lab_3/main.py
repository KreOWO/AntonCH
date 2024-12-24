from functs import vvod, save3
import random


def task_3(arr):
    print('Задание 3. Вставка элемента в одномерный массив')
    insertel, insertind = int(vvod('Введите вставляемый элемент')), int(vvod('Введите индекс вставляемого элемента'))
    arr.insert(insertind, insertel)
    print('Массив с вставленным элементом: ', arr)
    return arr


def task_4(arr):
    print('Задание 4. Определение массива на убывающую монотонность')
    monot = True
    for i in range(len(arr) - 1):
        if not arr[i] > arr[i+1]:
            monot = False
            break
    print(f'Массив {"не " if not monot else ""}монотонен!')
    return monot


def task_5(arr):
    print('Задание 5. Нахождение первого отрицательного элемента')
    res = -1
    if min(arr) >= 0:
        print('Все элементы массива не отрицательны!')
        return 0
    for i in arr:
        if i < 0:
            res = arr.index(i)
            print(f'Первый отрицательный элемент {i} имеет индекс {res}')
            break
    return [res, arr]


def task_6(arr):
    print('Задание 6. Нахождение первого нечетного элемента')
    chethave = False
    res = -1
    for i in arr:
        if i % 2 != 0:
            res = arr.index(i)
            print(f'Первый нечетный элемент {i} имеет индекс {res}')
            chethave = True
            break

    if not chethave:
        print('Все элементы массива четные!')
    return res


def task_7(arr):
    print('Задание 7. Нахождение первого положительного элемента')
    res = -1
    if max(arr) <= 0:
        print('Все элементы массива не положительные!')
        return 0
    for i in arr:
        if i > 0:
            res = arr.index(i)
            print(f'Первый положительный элемент {i} имеет индекс {res}')
            break
    return res


def task_8(arr):
    print('Задание 8. Нахождение первого четного элемента')
    chethave = False
    res = -1
    for i in arr:
        if i % 2 == 0:
            res = arr.index(i)
            print(f'Первый четный элемент {i} имеет индекс {res}')
            chethave = True
            break

    if not chethave:
        print('Все элементы массива нечетные!')
    return res


def task_9(arr):
    print('Задание 9. Сортировка')
    for i in range(len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

    print('Отсортированный массив: ', arr)
    return arr


def task_10(arr):
    print('Задание 10. Сортировка бинарными вставками')
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
    return arr


def task_12(arr):
    print('Задание 12. Сортировка простым обменом (Способ 1)')
    for i in range(len(arr)):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                t = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = t
    print('Отсортированный массив: ', arr)
    return arr


def lab_3_start():
    arr = [random.randint(-100, 100) for _ in range(10)]
    print('Сгенерированный массив: ', arr)
    results = [task_3(arr.copy()), task_4(arr), task_5(arr), task_6(arr), task_7(arr), task_8(arr), task_9(arr.copy()), task_10(arr.copy()), task_12(arr.copy())]
    save3(arr, results)
    print('Данные cохранены')
