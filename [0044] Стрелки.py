string = input()
l = 5
rez = 0

for i in range(len(string)):
    if string[i:i+l] == '<--<<' or string[i:i+l] == '>>-->':
       rez += 1

print(rez)
