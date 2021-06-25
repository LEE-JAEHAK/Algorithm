n = int(input())
arr = []
for i in range(n):
    a,b = input().split()
    b = int(b)
    arr.append([a,b])
arr = sorted(arr, key=lambda x:x[1])
for i in arr:
    print(i[0], end=' ')