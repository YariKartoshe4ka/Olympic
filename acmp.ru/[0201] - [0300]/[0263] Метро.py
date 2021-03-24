n, i, j = [int(i) for i in input().split()]
k = max(i, j) - min(i, j) - 1
print(min(k, n - k - 2))