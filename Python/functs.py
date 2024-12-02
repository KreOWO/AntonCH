import math


def vvod(var):
    while True:
        try:
            return float(input(f'{var}: ').replace(',', '.'))
        except:
            print('Введите число!')


def vivod(var, res):
    print(f'Переменная {var} = {res}')


def solveS(x):
    s = 1 + x + math.pow(x, 2)/2 + math.pow(x, 3) / 6 + math.pow(x, 4) / 24
    return s


def solveF(sf, x, y):
    sf['f'] = x * (math.sin(math.pow(x, 3)) + math.pow(math.cos(y), 2))


def solveSF(sf, x, y):
    sf['s'] = solveS(x)
    solveF(sf, x, y)
