from sys import exit
s = input()


def switch(symbol):
    if symbol == 'A': return 1
    if symbol == 'B': return 2
    if symbol == 'C': return 3
    if symbol == 'D': return 4
    if symbol == 'E': return 5
    if symbol == 'F': return 6
    if symbol == 'G': return 7
    if symbol == 'H': return 8
    if symbol == '1': return 1
    if symbol == '2': return 2
    if symbol == '3': return 3
    if symbol == '4': return 4
    if symbol == '5': return 5
    if symbol == '6': return 6
    if symbol == '7': return 7
    if symbol == '8': return 8
    if symbol == '9': return 9
    return 0

try:
    x1 = switch(s[0]); y1 = switch(s[1]);
    x2 = switch(s[3]); y2 = switch(s[4]);
except:
    print('ERROR')
    exit()

if x1 != 0 and x2 != 0 and s[2] == '-' and y1 < 9 and y1 > 0 and y2 > 0:
    if x2 - x1 == 1 and y2 - y1 == 2: print('YES')
    elif x2 - x1 == 1 and y1 - y2 == 2: print('YES')
    elif x1 - x2 == 1 and y1 - y2 == 2: print('YES')
    elif x1 - x2 == 1 and y2 - y1 == 2: print('YES')
    elif x2 - x1 == 2 and y2 - y1 == 1: print('YES')
    elif x2 - x1 == 2 and y1 - y2 == 1: print('YES')
    elif x1 - x2 == 2 and y1 - y2 == 1: print('YES')
    elif x1 - x2 == 2 and y2 - y1 == 1: print('YES')
    else: print('NO')
else:
    print('ERROR')
