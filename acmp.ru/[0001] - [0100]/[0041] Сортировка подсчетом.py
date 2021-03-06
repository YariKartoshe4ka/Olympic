n = input()
a = [int(i) for i in input().split(' ') if i != '']
b = [0] * 201

for number in a:
    b[number + 100] += 1

for i in range(201):
    print((str(i - 100) + ' ') * b[i], end='')
