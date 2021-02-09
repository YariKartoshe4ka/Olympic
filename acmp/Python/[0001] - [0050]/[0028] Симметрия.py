line = input().split(' ')
point = input().split(' ')

if int(line[0]) == int(line[2]):
    w = abs(int(point[0]) - int(line[0]))
    w = w if int(point[0]) < int(line[0]) else w - w - w
    print(str(int(line[0]) + w) + ' ' + point[1])
else:
    w = abs(int(point[1]) - int(line[1]))
    w = w if int(point[1]) < int(line[1]) else w - w - w
    print(point[0] + ' ' + str(int(line[1]) + w))