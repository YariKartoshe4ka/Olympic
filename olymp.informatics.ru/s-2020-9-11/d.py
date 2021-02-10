form = int(input())
cpp = int(input())
cobol = form - cpp

team = int(input())

loops = 1

if cobol / team >= cpp / team:
    print(-1)
else:
    cpp += team - cpp % team
    cobol -= cobol % team

    # End of 1 round

    while cobol > 0:

        loops += 1

        if cpp / 2 < cobol:
            cpp += team
            cobol -= team
        else:
            cpp = form
            cobol = 0

    print(loops)