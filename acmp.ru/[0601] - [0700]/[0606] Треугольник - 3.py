x, y, z = [int(i) for i in input().split()]
print('YES' if x + y > z and x + z > y and z + y > x else 'NO')
