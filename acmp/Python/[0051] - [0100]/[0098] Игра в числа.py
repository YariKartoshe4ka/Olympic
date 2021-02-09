input()
numbers = list(map(int, list(filter(None, input().split(' ')))))
p1 = 0
p2 = 0
f = True

while len(numbers) > 0:
    if numbers[0] == numbers[-1] or numbers[0] > numbers[-1]:
        n = numbers[0]
        numbers.pop(0)
    else:
        n = numbers[-1]
        numbers.pop(-1)

    if f:
        p1 += n
    else:
        p2 += n

    f = not f

print(p1, p2, sep=':')
