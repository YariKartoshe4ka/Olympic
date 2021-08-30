n = int(input())

wagons = list(map(int, input().split()))
last = wagons[0]
cnt = 0

for wagon in wagons[1:]:
    if wagon != last + 1:
        cnt += 1
    last = wagon

print(cnt)
