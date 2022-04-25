z = int(input()) - 1
n, a, b, c = [int(i) for i in input().split()]

print(min(a, b, c) if z else max(0, n - (n - a + n - b + n - c)))
