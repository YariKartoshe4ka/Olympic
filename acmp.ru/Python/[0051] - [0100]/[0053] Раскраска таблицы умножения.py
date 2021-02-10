n, m = list(map(int, input().split(' ')))
rez = [0]*m*n
index = 0

for i in range(1, n+1):
    for j in range(1, m+1):
        a = i*j
        if a % 2 == 0:
            rez[index] = 1
        if a % 3 == 0:
            rez[index] = 2
        if a % 5 == 0:
            rez[index] = 3
        index += 1

print('RED : ', rez.count(1))
print('GREEN : ', rez.count(2))
print('BLUE : ', rez.count(3))
print('BLACK : ', rez.count(0))