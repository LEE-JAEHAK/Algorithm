import sys
from collections import deque

input = sys.stdin.readline
INF = float('inf')

#입력 및 변수 초기화
N, M = map(int, input().split())  # 방의 수 N, 복도의 수 M
gra = [[] for _ in range(N)]  # 그래프 초기화
visit = [-1] * N  # 각 방의 방문 여부와 깊이를 저장하는 리스트 (-1은 미방문)
path = [[] for _ in range(N)]  # 방문 연결정보

# 그래프 입력
for _ in range(M):
    u, v, c = map(int, input().split())
    gra[u - 1].append((v - 1, c))  # 양방향 그래프이므로 양쪽에 추가
    gra[v - 1].append((u - 1, c))

# 도착점에서 출발하여 역방향으로 BFS 실행
visit[N - 1] = 0
queue = deque([N - 1])
while queue:
    u = queue.popleft()
    for v, c in gra[u]:
        if visit[v] == -1:  # 아직 방문하지 않은 노드라면
            visit[v] = visit[u] + 1  # 현 방문수 +1
            path[v].append((u, c))  # 이전 노드와 색상 저장
            queue.append(v)
        elif visit[v] == visit[u] + 1:  # 같은 방문 수라면
            path[v].append((u, c))

# 사전 순으로 가장 이상적인 경로 찾기
answer = []  # 지나가는 복도의 색상을 저장할 리스트 (최종 출력 값)
queue = {0}  # BFS 탐색을 위한 큐 (집합 자료형을 사용하여 중복 방지, 시작은 1번 방에 해당하는 0번 노드)

while queue:  # 큐가 비어 있지 않은 동안 계속 탐색
    next_queue = set()  # 다음 단계에서 탐색할 노드를 저장할 임시 큐 (set으로 중복 방지)
    min_c = INF  # 이번 단계에서 탐색할 복도 중 최소 색상 값을 저장할 변수 (처음은 무한대로 설정)

    # 현재 탐색 중인 모든 노드에 대해
    for u in queue:  # 큐에 있는 노드들을 하나씩 꺼내어 처리 (현재 단계에서 탐색 가능한 노드)
        for v, c in path[u]:  # 노드 u에 연결된 모든 노드 v와 해당 복도의 색상 c에 대해 탐색
            if min_c > c:  # 현재 최소 색상 min_c보다 복도 색상 c가 더 작으면
                next_queue = {v}  # 다음 단계에서 탐색할 큐를 현재 노드 v로 초기화 (이전에 있던 노드는 제거)
                min_c = c  # 최소 색상 값을 갱신 (최소값을 찾았으므로 업데이트)
            elif min_c == c:  # 복도 색상 c가 현재 최소 색상 min_c와 같다면
                next_queue.add(v)  # 같은 최소 색상을 가진 노드 v를 다음 탐색 큐에 추가 (기존 노드와 함께 탐색)

    if min_c == INF:  # 만약 이번 단계에서 탐색 가능한 노드가 없다면 (min_c가 그대로 INF일 경우)
        break  # 더 이상 탐색할 노드가 없으므로 반복문을 종료

    answer.append(min_c)  # 이번 단계에서 찾은 최소 색상 값을 결과 리스트에 추가
    queue = next_queue  # 다음 단계에서 탐색할 노드를 저장한 큐로 현재 큐를 업데이트

# 탐색이 끝나면 answer 리스트에는 1번 방에서 N번 방까지 가는 동안 지나간 복도의 색상이 사전 순으로 저장되어 있음


# 결과 출력
print(len(answer))  # 경로의 길이 출력
print(*answer)  # 경로에서 지나가는 색상 순서대로 출력
