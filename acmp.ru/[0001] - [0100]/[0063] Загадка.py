s, p = map(int, input().split())

a = s - 1
b = 1

for i in range(s):
    if a * b == p:
        break
    else:
        a -= 1
        b += 1

for i in sorted([b, a]):
    print(i, end=' ')