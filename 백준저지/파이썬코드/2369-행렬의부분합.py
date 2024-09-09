# 입력받기: 행렬의 크기 N, M과 나눌 값 K
N, M, K = map(int, input().split())

# N x M 크기의 행렬을 입력받아 2차원 리스트 A에 저장
A = [list(map(int, input().split())) for _ in range(N)]

# psum 배열 초기화 (N+1 x M+1 크기) - 0으로 초기화
# 이 배열은 부분합을 저장하는 데 사용됩니다.
psum = [[0] * (M + 1) for _ in range(N + 1)]

# 각 원소에 대해 부분합을 계산하여 psum 배열에 저장
for i in range(1, N+1):
    for j in range(1, M+1):
        psum[i][j] = A[i-1][j-1] + psum[i - 1][j] + psum[i][j - 1] - psum[i-1][j-1]

# 정답을 저장할 변수
ans = 0

# rearr은 각 열 간의 부분합을 저장하는 배열
rearr = [0] * (N + 1)

# 열의 구간 (i, j)를 반복
for i in range(M):
    for j in range(i + 1, M + 1):
        # 각 구간에 대한 나머지를 저장하는 딕셔너리 초기화
        redict = {}
        
        # 각 행에 대해 구간 (i, j)에서의 합을 rearr에 저장
        for low in range(1, N + 1):
            rearr[low] = (psum[low][j] - psum[low][i]) % K
        # 나머지를 딕셔너리에 저장하며 카운트
        for low in range(N + 1):
            redict.setdefault(rearr[low], 0) # 새로운 값이면 0을 넣고
            redict[rearr[low]] += 1 # 기존 값이면 1을 증가

        print(redict)
        #만약 rearr 배열에서 같은 나머지가 여러 번 나온다면,
        #그들 사이의 직사각형 부분 행렬이 
        #K로 나누어떨어지는 경우가 될 수 있습니다.
        #예를 들어, 나머지가 2번 이상 나온다면,
        #해당 나머지를 가진 부분 행렬 중 두 개를 선택해서 만들어지는 부분 행렬은 
        #K로 나누어떨어집니다.
        # 나머지가 같은 쌍의 개수를 계산하여 ans에 추가
        for q, n in redict.items():
            ans += n * (n - 1) // 2
            print(ans)

# 최종 결과 출력
print(ans)


