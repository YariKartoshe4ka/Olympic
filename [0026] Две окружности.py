from math import sqrt


round1 = input().split(' ')
round2 = input().split(' ')

i = 0 
for v in round1: 
    round1[i] = int(v)
    i += 1

i = 0 
for v in round2: 
    round2[i] = int(v)
    i += 1

r = sqrt((round2[0]-round1[0])**2+(round2[1]-round2[1])**2)

if round1[2] + round2[2] >= r and r + round2[2] <= round1[2] and r + round1[2] <= round2[2]:
    print('YES')
else:
    print('NO')
