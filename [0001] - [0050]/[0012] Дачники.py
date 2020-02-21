from math import sqrt

n = int(input())
d = []
rez = 0

for i in range(n):
    d.append(input().split(' '))

for i in range(len(d)):
    for j in range(len(d[i])):
        d[i][j] = int(d[i][j])

for i in d:
    if i[2] != i[4]:
        s = sqrt((i[2]-i[8])**2+(i[3]-i[9])**2)
        i[8] = i[2] + s; i[9]
    
    if i[2] <= i[0] <= i[6] and i[3] <= i[1] <= i[7]:
        rez += 1
    

print(rez)

#print(0.5*abs((i[2]-i[6])*(i[5]-i[7])-(i[4]-i[6])*(i[3]-i[7])))
#S=1/2|(x1-x3)(y2-y3)-(x2-x3)(y1-y3)|
