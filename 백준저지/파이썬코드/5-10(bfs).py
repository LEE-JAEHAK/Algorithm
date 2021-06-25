from collections import deque

n,m = map(int,input().split())
arr = []
for i in range(n):
    arr.append(list(map(int,input())))

visited = [[0]*m for _ in range(n)]
q = deque()
dir = [[0,1],[0,-1],[1,0],[-1,0]]

def bfs():
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = x + dir[i][0]
            ny = y + dir[i][1]

            if nx >= 0 and nx < n and ny >= 0 and ny < m:
                if visited[nx][ny] == 0 and arr[nx][ny] == 0:
                    q.append((nx,ny))
                    visited[nx][ny]=1

count = 0
for i in range(n):
    for j in range(m):
        if arr[i][j] == 0 and visited[i][j] == 0:
            q.append((i,j))
            visited[i][j]=1
            bfs()
            count += 1

print(count)