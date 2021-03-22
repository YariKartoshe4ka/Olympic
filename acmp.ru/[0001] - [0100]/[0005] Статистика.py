input()

even = []
uneven = []

for day in input().split():
    if int(day) % 2 == 0:
        even.append(day)
    else:
        uneven.append(day)

print(*uneven)
print(*even)
print('YES' if len(even) >= len(uneven) else 'NO')
