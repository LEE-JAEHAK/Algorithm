import sys

# 입력 처리
n, l = map(int, input().split())  # n: 팀의 수, l: 남은 경기 수
rank = 1  # 1번 팀의 현재 순위
gold_1, silver_1, bronze_1 = map(int, input().split())  # 1번 팀의 금, 은, 동메달
gold_1 += l  # 남은 경기에서 모두 금메달을 딴다는 가정

# 다른 팀들의 메달 정보 저장
other_teams = []
for _ in range(n-1):
    gold_other, silver_other, bronze_other = map(int, input().split())
    
    # 1. 금메달이 적으면 1번 팀보다 순위가 낮음, 비교할 필요 없음
    if gold_other < gold_1:
        continue
    # 2. 금메달이 많으면 1번 팀보다 순위가 높음
    elif gold_other > gold_1:
        rank += 1
        continue
    
    # 3. 금메달이 같으면 은메달을 비교
    if silver_1 < silver_other or (silver_1 == silver_other and bronze_1 < bronze_other):
        rank += 1
        continue
    
    # 4. 메달 분배 전략을 저장 (은메달과 동메달 차이를 기준으로)
    silver_diff = silver_1 - silver_other
    bronze_diff = max(bronze_1 - bronze_other + 1, 0)
    if silver_diff + bronze_diff <= l:
        other_teams.append((silver_diff, bronze_diff))
    elif silver_diff + 1 <= l:
        other_teams.append((silver_diff + 1, 0))

# 남은 경기에서 은메달과 동메달을 분배하여 최종 순위를 계산
other_teams.sort()  # 은메달 차이 우선, 동메달 차이를 기준으로 정렬
total_silver_used, total_bronze_used, bronze_contributions = 0, 0, []

for silver_needed, bronze_needed in other_teams:
    total_silver_used += silver_needed
    total_bronze_used += bronze_needed
    bronze_contributions.append(bronze_needed)

    # 남은 경기 수가 부족하면 순위 계산 종료
    if total_silver_used > l:
        print(rank)
        exit()

    # 동메달 분배가 가능하면 순위 업데이트
    if total_bronze_used <= l:
        rank += 1
        continue

    # 동메달 분배 불가능하면 남은 경기 수 계산
    bronze_contributions.sort()
    bronze_sum = 0
    for idx, bronze_contribution in enumerate(bronze_contributions):
        if bronze_sum + bronze_contribution > l:
            if total_silver_used + len(bronze_contributions) - idx <= l:
                rank += 1
            break
        else:
            bronze_sum += bronze_contribution
    else:
        continue

print(rank)
