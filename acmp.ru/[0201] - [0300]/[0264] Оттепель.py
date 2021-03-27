input()
m = t = 0

for i in input().split():
    t = t + 1 if int(i) > 0 else 0

    if t > m:
        m = t

print(m)
