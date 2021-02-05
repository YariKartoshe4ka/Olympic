def validate(s):
    try:
        a = eval(s.split('=')[0], {}, {})

        if a == int(s.split('=')[1]):
            return 'YES'
        else:
            return 'NO'

    except:
        return 'ERROR'

s = input()
print(validate(s))
