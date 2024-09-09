import sys
input = sys.stdin.readline

# 입력을 받기 위한 함수들
int1 = lambda: int(input())
ints = lambda: list(map(int, input().split()))

N, M = ints()  # 정점의 개수 N, 간선의 개수 M
adj = [ints() for _ in range(N - 1)] + [[]]  # 최단 거리 정보 입력받기

# 무한대 상수 설정
INF = float('inf')

# 거리 행렬 초기화 (INF로 초기화)
dists = [[INF] * N for _ in range(N)]
for i in range(N):
    dists[i][i] = 0  # 자기 자신까지의 거리는 0
    for j in range(i + 1, N):
        dists[i][j] = adj[i][j - (i + 1)]  # 인접 행렬에서 거리 정보 복사
        dists[j][i] = adj[i][j - (i + 1)]  # 대칭이므로 역방향도 동일하게 설정

# 모든 가능한 간선을 고려
edges = {(i, j) for i in range(N) for j in range(i + 1, N)}

# 플로이드-워셜 알고리즘으로 최단 거리 조건 확인 및 간선 구성
for k in range(N):
    for i in range(N):
        for j in range(i + 1, N):
            if k not in [i, j]:
                # dists[i][j]가 dists[i][k] + dists[k][j]보다 크면 오류
                if dists[i][j] > dists[i][k] + dists[k][j]:
                    print(0)  # 최단 거리가 더 작은 경우가 존재하면 복원 불가
                    sys.exit(0)
                # 최단 거리가 여러 경로로 나올 수 있는 경우 간선을 삭제
                elif len(edges) > M and 0 < dists[i][j] == dists[i][k] + dists[k][j]:
                    edges.discard((i, j))  # 이 간선은 필요하지 않음

# 간선의 수가 M이 아니면 복원이 불가
if len(edges) != M:
    print(0)
else:
    # 복원이 가능하면 1 출력 후 간선 정보 출력
    print(1)
    for u, v in edges:
        print(u + 1, v + 1, dists[u][v])
