n, m = map(int, input().split())
a = list(map(int, input().split()))
print('yes' if sum(a) - n + 1 >= m and max(a) <= m else 'no')
