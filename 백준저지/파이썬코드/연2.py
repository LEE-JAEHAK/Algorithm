from collections import deque
import sys

n,m = map(int,input().split())
g = [[] for _ in range(n+1)]
visited = [0] * (n+1)
q = deque()

for i in range(m):
    a,b = map(int,input().split())
    g[a].append(b)
    g[b].append(a)

cnt = 0
def bfs():
    while q:
        x = q.popleft()
        for i in g[x]:
            if visited[i] == 0:
                visited[i] = 1
                q.append(i)

for i in range(1,n+1):
    if visited[i] == 0:
        cnt += 1
        visited[i] = 1
        q.append(i)
        bfs()

print(cnt)