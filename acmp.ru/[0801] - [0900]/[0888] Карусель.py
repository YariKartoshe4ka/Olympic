input()
rez = 0
score = 3

for i in map(int, input().split()):
    rez += score if i else 0
    score = score + 1 if i else max(score - 3, 3)

print(rez)