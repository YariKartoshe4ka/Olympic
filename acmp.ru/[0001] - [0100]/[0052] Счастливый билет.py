n = list(input())
s1 = list(map(int, n[:3]))
s2 = list(map(int, n[3:6]))

if sum(s1) == sum(s2):
    print('YES')
else:
    print('NO')