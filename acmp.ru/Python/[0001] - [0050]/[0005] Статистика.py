input()
days = input().split(' ')
for i in range(len(days)): days[i] = int(days[i])
even = []
uneven = []

for day in days:
    if day % 2 == 0:
        even.append(str(day))
    else:
        uneven.append(str(day))

print(' '.join(uneven))
print(' '.join(even))
print('YES' if len(even) >= len(uneven) else 'NO')
