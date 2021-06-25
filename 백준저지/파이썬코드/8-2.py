memo = [0] * 100

def fib(x):
    if x == 1 or x == 2:
        return 1
    if memo[x] != 0:
        return memo[x]
    memo[x] = fib(x-1) + fib(x-2)
    return memo[x]

print(fib(90))