x = float(input())
cnt = 0
l = 0

while l < x:
    cnt += 1
    l += 1 / (cnt + 1)

print(f'{cnt} card(s)')
