string = input()

nums = list()
out = list()

for word in string:
    nums.append(int(word, base=27))

def convert(num):
    if num == 1: return 'a'
    elif num == 2: return 'b'
    elif num == 3: return 'c'
    elif num == 4: return 'd'
    elif num == 5: return 'e'
    elif num == 6: return 'f'
    elif num == 7: return 'g'
    elif num == 8: return 'h'
    elif num == 9: return 'i'
    elif num == 10: return 'j'
    elif num == 11: return 'k'
    elif num == 12: return 'l'
    elif num == 13: return 'm'
    elif num == 14: return 'n'
    elif num == 15: return 'o'
    elif num == 16: return 'p'
    elif num == 17: return 'q'
    elif num == 18: return 'r'
    elif num == 19: return 's'
    elif num == 20: return 't'
    elif num == 21: return 'u'
    elif num == 22: return 'v'
    elif num == 23: return 'w'
    elif num == 24: return 'x'
    elif num == 25: return 'y'
    elif num == 26: return 'z'
    elif num == 27: return ' '


for i in range(1, len(nums) + 1):
    while nums[i - 1] - i < 1:
        nums[i - 1] += 27
    out.append(convert(nums[i - 1] - i))

print(''.join(out))
