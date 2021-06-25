from collections import deque

graph = [[],[2,3,8],[1,7],[1,4,5],[3,5],[3,4],[7],[2,6,8],[1,7]]
visited = [0] * 9

def bfs():
    while q:
        v = q.popleft()
        print(v,end=' ')
        for i in graph[v]:
            if visited[i] == 0:
                q.append(i)
                visited[i]=1


q = deque()
visited[1]=1
q.append(1)
bfs()