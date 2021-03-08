n = list(input())
s1 = list(map(int, n[:3]))
s2 = list(map(int, n[3:]))

print('YES' if sum(s1) == sum(s2) else 'NO')
