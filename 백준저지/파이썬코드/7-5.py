n = int(input())
arr = list(map(int,input().split()))
arr.sort()

def func(tar):
    left = 0
    right = n-1
    while left<=right:
        mid = (left + right)//2
        if arr[mid] == tar:
            return mid
        elif arr[mid] > tar:
            right = mid - 1
        else:
            left = mid + 1
    return None


m = int(input())
x = list(map(int,input().split()))

for i in x:
    a = func(i)
    if a == None:
        print("No")
    else:
        print(a)