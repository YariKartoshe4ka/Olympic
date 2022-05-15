def solve():
    a = list(map(int, list(input())))
    print('YES' if sum(a[:3]) == sum(a[3:]) else 'NO')


def main():
    for _ in range(int(input())):
        solve()


main()
