n, s = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()])

i = 0

while i < len(a) and s >= a[i]:
    s -= a[i]
    i += 1

print(i)