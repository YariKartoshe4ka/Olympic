a = int(input())
if a > 0:
    s = list(range(0, a+1))
else:
    s = list(range(1, a-1, -1))

print(sum(s))
