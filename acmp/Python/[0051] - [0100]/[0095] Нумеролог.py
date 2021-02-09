n = input()
count = 0

while len(n) > 1:
    n = str(sum(list(map(int, list(n)))))
    count += 1

print(n, count)