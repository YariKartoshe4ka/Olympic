def validate(n, table):
    example = [1] * n ** 2

    for row in table:
        inputs = [0] * n ** 2

        for char in row:
            if int(char) > n ** 2:
                return 'Incorrect'

            inputs[int(char) - 1] += 1

        if inputs != example:
            return 'Incorrect'

    for col in range(n ** 2):
        inputs = [0] * n ** 2

        for char in range(n ** 2):
            inputs[int(table[char][col]) - 1] += 1

        if inputs != example:
            return 'Incorrect'

    for i in range(0, n ** 2, n):
        for j in range(0, n ** 2, n):
            inputs = [0] * n ** 2

            for _i in range(n):
                for _j in range(n):
                    inputs[int(table[i + _i][j + _j]) - 1] += 1

            if inputs != example:
                return 'Incorrect'

    return 'Correct'


n = int(input())
table = []

for i in range(n ** 2):
    table.append(input().replace(' ', ''))

print(validate(n, table))