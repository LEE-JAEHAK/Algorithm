import sys

# 입력 처리
N, target_concentration = map(int, sys.stdin.readline().strip().split())
solution_amounts = [0] * 101  # 각 농도별 용액의 양을 저장
max_solution = 0.0  # 최종 답을 저장할 변수

# 각 병에 대한 정보를 입력받아 처리
for _ in range(N):
    concentration, amount = map(int, sys.stdin.readline().strip().split())
    solution_amounts[concentration] += float(amount)
    if concentration == target_concentration:
        max_solution += amount

# 농도 탐색 범위 설정
low_concentration, high_concentration = target_concentration - 1, target_concentration + 1

# 두 농도를 섞어서 목표 농도를 맞추는 과정
while low_concentration >= 0 and high_concentration <= 100:
    # 낮은 농도에 용액이 있는지 확인
    while solution_amounts[low_concentration] == 0:
        low_concentration -= 1
        if low_concentration < 0:
            break
    # 높은 농도에 용액이 있는지 확인
    while solution_amounts[high_concentration] == 0:
        high_concentration += 1
        if high_concentration > 100:
            break
    if low_concentration < 0 or high_concentration > 100:
        break

    high_amount = solution_amounts[high_concentration]
    low_amount = solution_amounts[low_concentration]
    high_solution = high_concentration * high_amount / 100
    low_solution = low_concentration * low_amount / 100

    # 혼합 비율 계산
    mix_ratio = (100 * high_solution - target_concentration * high_amount) / (target_concentration * low_amount - 100 * low_solution)

    # 혼합 가능한 양에 따라 다른 처리
    if mix_ratio > 1:
        max_solution += high_amount / mix_ratio + low_amount
        solution_amounts[high_concentration] -= high_amount / mix_ratio
        solution_amounts[low_concentration] = 0.0
        low_concentration -= 1
    else:
        max_solution += high_amount + low_amount * mix_ratio
        solution_amounts[high_concentration] = 0.0
        solution_amounts[low_concentration] -= low_amount * mix_ratio
        high_concentration += 1

# 최종 결과 출력
print(max_solution)
