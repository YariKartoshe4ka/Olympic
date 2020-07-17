friends = []


for i in range(int(input())):
    friends.append(input())


m_friends = []
also_friend_of = []

for i in range(int(input())):
    d = input()
    if d in friends:
        m_friends.append(d)
    else:
        also_friend_of.append(d)


print('Friends: ' + ', '.join(sorted(friends)))
print('Mutual Friends: ' + ', '.join(sorted(m_friends)))
print('Also Friend of: ' + ', '.join(sorted(also_friend_of)))
