from functs import solveSF, vvod, vivod


def lab_1_start():
    x, y = vvod('Введите x'), vvod('Введите y')
    sf = {'s': 0, 'f': 0}
    solveSF(sf, x, y)
    vivod('s', sf['s'])
    vivod('f', sf['f'])
