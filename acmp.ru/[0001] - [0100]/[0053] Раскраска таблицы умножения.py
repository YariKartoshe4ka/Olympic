n, m = map(int, input().split())

red = green = blue = black = 0


for i in range(1, n + 1):
    for j in range(1, m + 1):
        a = i * j

        if a % 5 == 0:
            blue += 1
        elif a % 3 == 0:
            green += 1
        elif a % 2 == 0:
            red += 1
        else:
            black += 1

print('RED :', red)
print('GREEN :', green)
print('BLUE :', blue)
print('BLACK :', black)
