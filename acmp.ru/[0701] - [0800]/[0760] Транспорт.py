n, v, l = map(int, input().split())
print(f'{l / v * 60 + sum([e for i, e in enumerate((map(int, input().split()) if n else [])) if i % 2]):.02f}')
