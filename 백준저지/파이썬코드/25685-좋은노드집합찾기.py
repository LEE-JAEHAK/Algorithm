# DFS 함수 정의
def dfs(node):
    # dp 배열 초기화: dp[node][0]은 해당 노드가 선택된 경우, dp[node][1]은 선택되지 않은 경우
    dp[node][0] = values[node]  # 노드를 선택한 경우, 해당 노드의 값을 추가
    child_count = selected_count = 0  # 자식 노드 수와 선택된 자식 노드 수
    max_difference = -1e18  # 큰 음수로 초기화하여 최대 차이 계산
    best_child = None  # 선택할 최적의 자식 노드
    
    # 자식 노드 탐색
    for child in tree[node]:
        dfs(child)  # 자식 노드를 재귀적으로 탐색
        child_count += 1  # 자식 노드 카운트
        
        # 현재 노드가 선택된 경우, 자식 노드는 선택되지 않은 경우의 값을 더함
        dp[node][0] += dp[child][1]
        
        # 자식 노드가 선택된 경우와 선택되지 않은 경우 중 더 큰 값을 선택
        if dp[child][0] >= dp[child][1]:
            dp[node][1] += dp[child][0]
            selected_count += 1  # 자식 노드가 선택된 경우 카운트
        else:
            difference = dp[child][0] - dp[child][1]
            # 더 큰 차이를 가진 자식 노드를 선택
            if difference > max_difference:
                max_difference = difference
                best_child = child
            dp[node][1] += dp[child][1]  # 자식 노드가 선택되지 않은 경우의 값을 더함
    
    # 자식 노드가 있고, 선택된 자식 노드가 없는 경우
    if child_count and not selected_count:
        dp[node][1] += max_difference  # 최대 차이를 더해 최적화


# 메인 함수
T = int(input())  # 테스트 케이스 수 입력
for _ in range(T):
    n = int(input())  # 노드 수 입력
    
    # 트리 구조 및 필요한 변수 초기화
    global tree, values, dp
    tree = [[] for _ in range(n + 1)]  # 트리 인접 리스트 (노드 간의 관계)
    values = [0] * (n + 1)  # 각 노드의 값
    dp = [[0, 0] for _ in range(n + 1)]  # dp 배열: [노드를 선택한 경우, 선택하지 않은 경우]
    
    # 노드 값 입력
    values = [0] + list(map(int, input().strip().split()))
    
    # 부모-자식 관계 입력
    root = 0  # 루트 노드를 저장할 변수
    parent_info = [0] + list(map(int, input().strip().split()))
    for i in range(1, n + 1):
        if parent_info[i] == 0:
            root = i  # 루트 노드 설정
        else:
            tree[parent_info[i]].append(i)  # 부모-자식 관계 설정
    
    # DFS를 통해 최적의 값을 계산
    dfs(root)
    
    # 루트 노드에서 최종 값을 출력 (노드를 선택한 경우와 선택하지 않은 경우 중 더 큰 값)
    print(max(dp[root][0], dp[root][1]))
