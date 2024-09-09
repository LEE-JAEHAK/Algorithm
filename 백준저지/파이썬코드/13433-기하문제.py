import sys
from math import sqrt

# 입력 속도 개선 및 재귀 깊이 설정
input = sys.stdin.readline
sys.setrecursionlimit(100000)

# 입력 처리
n = int(input())  # N으로 변경된 n
values = list(map(int, input().split()))  # 리스트를 li에서 values로 변경

# 초기값 설정
result = float('inf')  # 큰 값 설정 (ans에서 result로 변경)

# 재귀 함수 정의
def calculate_min_sum(visited, depth):
    global result
    if depth == n:  # 모든 원소를 방문한 경우
        visited.sort(key=lambda x: x[0])  # 인덱스를 기준으로 정렬
        selected_values = [values[idx[1]] for idx in visited]  # 정렬된 순서에 따른 값 추출
        dp = [0]  # 동적 계획법 테이블 초기화
        # 최적화 계산
        for i in range(1, n):
            max_value = 0
            for j in range(i):
                max_value = max(max_value, dp[j] + 2 * sqrt(selected_values[i] * selected_values[j]))
            dp.append(max_value)
        result = min(result, dp[-1])  # 최소값 갱신
        return
    
    # 재귀 호출: 가능한 모든 순열을 탐색
    for i in range(n):
        if not visited[i]:
            visited[i] = (i, depth)
            calculate_min_sum(visited, depth + 1)
            visited[i] = 0  # 방문한 후 복구

# 재귀 함수 실행
calculate_min_sum([0] * n, 0)

# 결과 출력
print(result)
