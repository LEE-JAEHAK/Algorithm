import heapq
INF = int(1e9)
n,m,start = map(int,input().split())
arr = [[] for _ in range(n+1)]
for _ in range(m):
    a,b,c = map(int,input().split())
    arr[a].append([b,c])

dis = [INF] * (n+1)

def dik(start):
    q = []
    heapq.heappush(q, [0, start])
    dis[start] = 0

    while q:
        dist, now = heapq.heappop(q)
        if dis[now] < dist:
            continue
        for i in arr[now]:
            cost = dist + i[1]
            if cost < dis[i[0]]:
                dis[i[0]] = cost
                heapq.heappush(q, [cost, i[0]])

dik(start)

count = 0
maxx = 0
print(dis)
# for d in dis:
#     if d != int(1e9):
#         count += 1
#         maxx = max(maxx, d)

# print(count - 1, maxx)
