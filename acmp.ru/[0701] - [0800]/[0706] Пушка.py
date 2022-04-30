r, x, y = map(int, input().split())
print(f'{r * abs(x) / (2 * r - y):.5f}')
