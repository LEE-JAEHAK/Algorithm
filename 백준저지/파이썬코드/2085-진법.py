def count(base_index, number_str, length):
    dp = [0] * 36  # DP 배열 초기화
    dp[0] = 1  # 초기값 설정 (첫 번째 자리수부터 시작)

    if length > 2 * base_index:  # base가 가능한 모든 경우보다 큰 경우
        for i in range(base_index):
            if number_str[i] == '0':  # 숫자가 0이면 앞에 나올 수 없으므로 단일 자릿수만 허용
                dp[i + 1] += dp[i]
                continue
            for j in range(i, base_index):
                dp[j + 1] += dp[i]
    else:  # base가 작은 경우의 처리
        base_value = 0
        for i in range(base_index, length):
            base_value = base_value * 10 + int(number_str[i])  # base 값 계산
        
        for i in range(base_index):
            if number_str[i] == '0':  # 숫자가 0이면 앞에 나올 수 없으므로 단일 자릿수만 허용
                dp[i + 1] += dp[i]
                continue
            
            current_value = 0
            for j in range(i, base_index):
                current_value = current_value * 10 + int(number_str[j])
                if current_value < base_value:  # 현재 값이 base_value보다 작으면 valid
                    dp[j + 1] += dp[i]
                else:
                    break
    return dp[base_index]


# 입력 처리
number_str = input().strip()  # 문자열 입력받기
length = len(number_str)  # 문자열 길이 계산

# 첫 번째 문자가 0인 경우는 무효한 경우이므로 처리
if number_str[0] == '0':
    print(0 if number_str[1] == '0' else 1)
    exit()

result = 0
# 모든 경우의 수를 계산
for i in range(1, length):
    if number_str[i] == '0':  # 0은 무효한 자릿수로 간주
        continue
    result += count(i, number_str, length)

print(result)
