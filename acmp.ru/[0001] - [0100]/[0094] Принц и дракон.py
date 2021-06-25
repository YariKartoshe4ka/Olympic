n, m, k = map(int, input().split())
print((m - n - 1) // (n - k) + 2 if m <= n >= k else n // m or 'NO')