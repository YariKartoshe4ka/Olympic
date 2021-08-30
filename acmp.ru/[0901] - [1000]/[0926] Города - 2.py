n = int(input())
box = []
cities = 0

for line in range(n):
    box.append('')

    for city in input():
        if city == 'C':
            cities += 1
        box[-1] += city


cnt = 0

for line in box:
    for city in line:
        if city == 'C':
            cnt += 1
        print(2 if cnt > cities // 2 else 1, end='')
    print()
