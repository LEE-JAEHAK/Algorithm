from collections import deque

n,m = map(int,input().split())
r,c,d = map(int,input().split())
arr = []
for i in range(n):
    arr.append(list(map(int,input().split())))

visited = [[0]*m for _ in range(n)]
dir = [[-1,0],[0,1],[1,0],[0,-1]]
visited[r][c] = 1
q = deque()

def bfs():
    while q:
        x,y,d = q.popleft()

        no = 4
        d -= 1
        if d == -1: d = 3
        flag = 0

        while no>0:
            no-=1
            nx = x + dir[d][0]
            ny = y + dir[d][1]
            if 0<=nx and nx<n and 0<=ny and ny<m:
                if visited[nx][ny]==0 and arr[nx][ny]==0:
                    visited[nx][ny] = visited[x][y] + 1
                    flag = 1
                    q.append([nx,ny,d])
                    break
            d-=1
            if d==-1:d=3
        if flag==0:
            d+=1
            if(d==4):d=0
            nx = x - dir[d][0]
            ny = y - dir[d][1]
            q.append([nx,ny,d])
            if arr[nx][ny] == 1:return

def check():
    cnt = 0
    for i in range(n):
        for j in range(m):
            if visited[i][j] != 0:cnt+=1
    return cnt


q.append([r,c,d])
bfs()

print(check())

