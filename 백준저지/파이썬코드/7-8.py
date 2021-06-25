n,m = map(int,input().split())
arr = list(map(int,input().split()))

def cal(x):
    sum=0
    for i in arr:
        if x < i:
            sum += (i - x)
    return sum

left=0
right=2e9
maxx = 0
while left<=right:
    mid = (left+right)//2
    if cal(mid) < m:
        right = mid - 1
    else:
        left = mid + 1
        maxx = mid

print(maxx)