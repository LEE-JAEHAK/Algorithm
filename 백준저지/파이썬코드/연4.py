from itertools import combinations

data = []
for i in range(4):
    data.append(i)

a = (list(combinations(data,3)))
print(a)