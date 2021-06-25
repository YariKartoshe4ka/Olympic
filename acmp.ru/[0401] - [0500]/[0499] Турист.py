from itertools import combinations
from sys import exit

k, w = map(int, input().split())
temp = list(map(int, input().split()))
c = list(zip(temp[::2], temp[1::2]))


for i in range(3):
    for combination in combinations(c, i + 1):
        weight = guys = 0

        for tent in combination:
            weight += tent[0]
            guys += tent[1]

        if guys >= k and weight <= w:
            print('YES')
            exit()

print('NO')
