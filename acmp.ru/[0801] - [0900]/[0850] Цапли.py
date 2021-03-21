a, b = [int(i) for i in input().split()]
min = min(a, b)
max = max(a, b)
print(max // 2 + max % 2, min)