import sys
from heapq import heappush, heappop  # heapq 모듈에서 heappush와 heappop만 불러옵니다.

inp = sys.stdin.readline  # 입력 속도를 빠르게 하기 위해 readline 사용

#최대값
INF = 10**9  # 무한대를 나타내는 값. 경로가 없을 때 사용할 큰 값

# 입력
# 입력 처리: 정점의 개수 N, 간선의 개수 M, 특수 능력을 사용할 수 있는 횟수 C
N, M, C = map(int, inp().split())

# 그래프 구성
# 그래프 인접 리스트 생성. 정점 번호는 1부터 N까지이므로 N+1 크기로 만듭니다.
gra = [[] for _ in range(N+1)]
for _ in range(M):
    # 간선의 정보를 입력받아 인접 리스트에 저장합니다.
    a, b, cost = map(int, inp().split())
    gra[a].append((b, cost))

# 각 정점에 대해, 특수 능력을 0번부터 C번까지 사용했을 때의 최단 비용을 저장하는 2차원 배열
# dist [각 노드에][특수능력을 몇번사용]
# 능력 사용 횟수에 따라 촤단경로 관리
dist = [[INF for _ in range(C+1)] for _ in range(N+1)]
# 초기값
dist[1][0] = 0  # 시작점인 1번 정점에서 특수 능력을 0번 사용한 상태의 비용은 0으로 초기화

## (지금까지의 거리, 지금 정점, 사용한 특수 능력 횟수)
q = []  # 우선순위 큐를 저장할 리스트

# 다익스트라 알고리즘 변형: 특수 능력 사용 횟수에 따라 다른 비용을 기록하며 경로 탐색
# 각 특수능력 카운팅마다
for count in range(C+1):  # 특수 능력을 0번부터 C번까지 사용했을 때의 경우를 처리
    # 각 노드에서 시작
    for node in range(N+1):
        # 현재 정점까지의 비용이 무한대가 아니면 큐에 삽입
        if dist[node][count] < INF:
            # (현재 비용, 현재 정점, 사용한 특수 능력 횟수)
            heappush(q, (dist[node][count], node, count))  

    # 우선순위 큐가 빌 때까지 반복하여 최단 경로를 탐색
    while q:
        d, now, cnt = heappop(q)  # 현재 가장 작은 비용의 정점 정보를 꺼냄
        # 현재 정점에서 갈 수 있는 인접 정점들을 탐색
        for next, cost in gra[now]:
            # 1. 특수 능력을 사용하지 않고 가는 경우
            if d + cost < dist[next][cnt]:  # 기존 비용보다 더 적은 비용으로 도착할 수 있으면 갱신
                dist[next][cnt] = d + cost  # 새로운 최소 비용 저장
                heappush(q, (dist[next][cnt], next, cnt))  # 큐에 삽입하여 다음 탐색을 진행
                
            # 2. 특수 능력을 사용해서 간선의 가중치를 음수로 바꾸는 경우
            # 특수능력을 사용할 수 있으면서 이득인 경우
            if cnt < C and d - cost < dist[next][cnt+1]:  # 특수 능력 사용 가능하고, 더 작은 비용으로 갈 수 있으면 갱신
                dist[next][cnt+1] = d - cost  # 특수 능력을 사용한 새로운 최소 비용 저장

# N번 정점까지 도달하는 여러 경로 중에서 가장 작은 비용을 출력
print(min(dist[N]))
