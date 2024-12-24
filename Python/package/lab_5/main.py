def get_data():
    datalen = int(input('Введите количество городов: '))
    data = {}
    for i in range(datalen):
        name = input(f'Введите название города {i + 1}/{datalen}: ')
        chisl = int(input(f'Введите численность населения города {name}: '))
        country = input(f'Введите страну города {name}: ')
        data[name] = {'chisl': chisl, 'country': country}
    return data


def belarus_goroda_count(data):
    count = 0
    for info in data.values():
        if info['country'] == 'Белоруссия':
            count += 1

    return count


def sred_chisl_and_count_less100(data):
    goroda = 0
    chisl = 0
    for info in data.values():
        if info['chisl'] < 100:
            goroda += 1
            chisl += info['chisl']

    if goroda:
        return [goroda, chisl / goroda]
    else:
        return [0, 0]


def sred_chisl_austr(data):
    goroda = 0
    chisl = 0
    for info in data.values():
        if info['country'] == 'Австрия':
            goroda += 1
            chisl += info['chisl']

    if goroda:
        return chisl / goroda
    else:
        return 0


def lab_5_start():
    data = get_data()
    bel_gor = belarus_goroda_count(data)
    count_less100, sr_ch_less100 = sred_chisl_and_count_less100(data)
    sr_ch_austr = sred_chisl_austr(data)
    print(f'Белорусских городов: {bel_gor}')
    print(f'Городов с населением < 100: {count_less100}')
    print(f'Средняя численность населения городов с населением < 100: {sr_ch_less100}')
    print(f'Средняя численность населения австрийских городов: {sr_ch_austr}')
