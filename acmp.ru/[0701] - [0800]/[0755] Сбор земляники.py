x, y, z = [int(i) for i in input().split(' ')]
print('Impossible' if x + y < z else x + y - z)