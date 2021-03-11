n = int(input())

k = 1
for h in input().split():
    if int(h) <= 437:
        print(f'Crash {k}')
        break
    k += 1
else:
    print('No crash')
