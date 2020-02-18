from sys import exit
cord = input().split('-')

if cord[0] == cord[1]:
    print('NO')
    exit()
elif cord[0][0] == cord[0][0].lower() or cord[1][0] == cord[1][0].lower():
    print('ERROR')
    exit()

def verif_err(symbols, c):
    for symbol in symbols:
        if c[0][0] == symbol:
            break
    else:
        print('ERROR')
        exit()
    for symbol in symbols:
        if c[1][0] == symbol:
            break
    else:
        print('ERROR')
        exit()
    if (int(c[0][1]) > 8) or (int(c[0][1]) < 1) or (int(c[1][1]) < 1) or int(c[1][1]) > 8:
        print('ERROR')
        exit()


def verif_no(symbols, c):
    #if c[0][0] == c[1][0] or c[0][1] == c[1][1]:
    #    print('NO')
    #    exit()
    id1 = symbols.index(c[0][0])
    id2 = symbols.index(c[1][0])
    if abs(id1 - id2) > 2 or abs(id1 - id2) == 0:
        print('NO')
        exit()
    elif abs(int(c[0][1]) - int(c[1][1])) > 2 or abs(int(c[0][1]) - int(c[1][1])) == 0:
        print('NO')
        exit()
    
if len(cord) < 2:
    print('ERROR')
else:
    c = [list(cord[0]), list(cord[1])]
    symbols = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
    verif_err(symbols, c)
    verif_no(symbols, c)
    print('YES')
    
