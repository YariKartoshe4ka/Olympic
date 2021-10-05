input()

a = [0] * 100

for c in input().split():
    a[int(c) - 1] += 1


mi = f = 0

for i in range(1, len(a)):
    if a[i] > a[mi]:
        mi = i
        f = 0

    elif a[i] == a[mi]:
        f = 1


print(f - 1 and mi + 1)
