input()
m = [int(i) for i in input().split()]

first = second = 0
i = 0
j = len(m) - 1

sub = 0
flag = True

while i <= j:
    if m[i] >= m[j]:
        sub = m[i]
        i += 1
    else:
        sub = m[j]
        j -= 1

    if flag:
        first += sub
    else:
        second += sub

    flag = not flag

print(first, second, sep=':')
