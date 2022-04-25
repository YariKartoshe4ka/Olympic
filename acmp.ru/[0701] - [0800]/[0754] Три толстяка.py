a = [int(i) for i in input().split() if 94 <= int(i) <= 727]
print(max(a) if len(a) == 3 else 'Error')
