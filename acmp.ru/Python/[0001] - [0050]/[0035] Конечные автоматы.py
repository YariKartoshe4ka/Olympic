n = int(input())
rez = []

for i in range(n):
    data = input().split(' ')
    for i in range(len(data)): data[i] = int(data[i])
    d = 19*data[1]+(data[0]+239)*(data[0]+366)//2
    rez.append(d)

for i in rez: print(i)