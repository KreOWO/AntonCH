import random
from functs import save2


def lab_2_start():
    arr = [random.randint(-100, 100) for i in range(10)]
    print('Сгенерированный массив: ', arr)
    res = len([1 for i in arr if 9 < i < 100 and ((i % 10) + (i // 10)) % 5 == 0])
    resarr = [i for i in arr if i < res]
    print(f'Количество двузначных элементов сумма чисел которых кратна 5: {res}')
    print('Массив чисел из сгенерированного, меньших найденного числа:\n', resarr)
    save2(arr, res, resarr)
