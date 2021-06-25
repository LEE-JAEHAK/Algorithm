import heapq

# q = []
# q2 = [1,5,4,2,7,0,6,5,8,3,2]
# for i in q2:
#     heapq.heappush(q, i)
# # heapq.heappush(q, q2)
# for i in range(len(q)):
#     print(q[i], end=' ')
# print()
# while q:
#     print(heapq.heappop(q), end=' ')

n,m = map(int,input().split())
start = int(input())
graph = [[] for i in range(n+1)]
dis = [1e9] * (n+1)

for _ in range(m):
    a,b,c = map(int,input().split())
    graph[a].append([b,c])

def dik(start):
    q = []
    heapq.heappush(q, (0,start))
    dis[start] = 0
    while q:
        dist, now = heapq.heappop(q)
        if dis[now] < dist:
            continue
        for i in graph[now]:
            cost = dist + i[1]
            if cost < dis[i[0]]:
                dis[i[0]] = cost
                heapq.heappush(q, (cost, i[0]))
                
dik[start]