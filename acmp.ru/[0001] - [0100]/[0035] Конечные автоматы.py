k = int(input())

for i in range(k):
    n, m = [int(i) for i in input().split()]
    print(19 * m + (n + 239) * (n + 366) // 2)
