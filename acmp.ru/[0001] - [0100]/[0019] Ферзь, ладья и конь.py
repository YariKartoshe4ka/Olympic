c = input().split(' ')
f = ()

def count(figure:str, cord:str):
    global f
    g = list(range(1, 9))
    w = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
    if figure == 'R':
        for i in g: f.append(c[0][0] + str(i))
        for i in w: f.append(i + c[0][1])

#for i in range(len(c)):
#    c[i] = str(int(c[i][0], base=18) + 1)[1] + c[i][1]
count('R', c[1])
#f.pop(f.index(c[1], 10))
print(f)
