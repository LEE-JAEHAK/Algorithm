n = int(input())
x,y = 1,1
plans = input().split()

dir = [[0,-1],[0,1],[-1,0],[1,0]]
move_types = ['L','R','U','D']

for plan in plans:
    for i in range(len(move_types)):
        if plan == move_types[i]:
            nx = x + dir[i][0]
            ny = y + dir[i][1]
    if nx < 1 or ny < 1 or nx > n or ny > n:
        continue
    x,y = nx,ny

print(x,y)