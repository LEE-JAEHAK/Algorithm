n = 1260
count = 0

list = [500, 100, 50, 10]

for coin in list:
    count += n
    print(count)
    n %= coin

print(count)