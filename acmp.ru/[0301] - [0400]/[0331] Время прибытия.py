h1, m1 = [int(i) for i in input().split(':')]
h2, m2 = [int(i) for i in input().split()]

m3 = (m1 + m2) % 60
h3 = (h1 + h2 + (m1 + m2) // 60) % 24

print(f'{h3:02d}:{m3:02d}')
