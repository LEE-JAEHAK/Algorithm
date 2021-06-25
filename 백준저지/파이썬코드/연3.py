k,n = map(int,input().split())
arr = []
for i in range(k):
    a = int(input())
    arr.append(a)

left=1
right=2e31
maxx = 0

while left <= right:
    mid = (left + right) // 2
    sum = 0
    for i in arr:
        sum += (i // mid)
    if sum < n:
        right = mid - 1
    else:
        left = mid + 1
        maxx = max(maxx, mid)

print(round(maxx))