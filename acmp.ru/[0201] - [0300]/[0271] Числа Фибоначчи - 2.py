g = int(input())
n = 2
a = b = 1

while a < g:
    a, b = a + b, a
    n += 1


print('1\n' + str(n) if a == g else 0)
