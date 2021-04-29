maxf = minf = cnt = 0

for i in input():
    cnt = (cnt - 1) if i == '2' else (cnt + 1)

    maxf = max(cnt, maxf)
    minf = min(cnt, minf)

print(maxf + abs(minf) + 1)