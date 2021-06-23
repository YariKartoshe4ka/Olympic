n, m = map(int, input().split())
print(sum(sorted([int(i) for i in input().split() if int(i) > 0], reverse=True)[:m]))