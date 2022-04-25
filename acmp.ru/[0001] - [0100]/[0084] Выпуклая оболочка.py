n, m = [int(i) for i in input().split(' ')]
x1 = y1 = x2 = y2 = -1

for i in range(n):
    s = input()

    for j in range(len(s)):
        if s[j] == '*':

            if x1 == -1 or j < x1:
                x1 = j
            if y1 == -1 or i < y1:
                y1 = i
            if x2 == -1 or j > x2:
                x2 = j
            if y2 == -1 or i > y2:
                y2 = i

for i in range(n):
    for j in range(m):
        if i >= y1 and j >= x1 and i <= y2 and j <= x2:
            print('*', end='')
        else:
            print('.', end='')
    print()
