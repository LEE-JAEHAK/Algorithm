from itertools import product, permutations
data = [1,2,3]
print(list(product(data,repeat=3)))
print(list(permutations(data,2)))
