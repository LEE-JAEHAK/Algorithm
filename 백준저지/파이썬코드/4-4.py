n,m = map(int,input().split())
x,y,di = map(int,input().split())
visited = [[0] * m for _ in range(n)]
visited[x][y]=1

arr = [list(map(int,input().split())) for _ in range(n)]
# for i in range(n):
#     arr.append(list(map(int,input().split())))
dir = [[-1,0],[0,1],[1,0],[0,-1]]

def left():
    global di
    di -= 1
    if di == -1: di = 3

count = 1
time = 0
while True:
    left()
    nx = x + dir[di][0]
    ny = y + dir[di][1]

    if visited[nx][ny]==0 and arr[nx][ny]==0:
        visited[nx][ny]=1
        x = nx
        y = ny
        count += 1
        time = 0
        continue
    else:
        time += 1
    if time == 4:
        nx = x - dir[di][0]
        ny = y - dir[di][1]

        if arr[nx][ny] == 0:
            x = nx
            y = ny
        else:
            break
        time = 0

print(count)
