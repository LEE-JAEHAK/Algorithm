
s = input()  # 문자열 입력
al = input()  # 알파벳의 '좋고 나쁨'을 나타내는 문자열 입력
k = int(input())  # 최대 허용되는 나쁜 알파벳의 수 입력

# 모든 접미사를 생성하고 사전순으로 정렬
Suffix = sorted([s[i:] for i in range(len(s))]) 

# 변수 초기화
answer = 0  # 좋은 부분 문자열의 개수를 저장할 변수
before = ''  # 이전 접미사를 저장할 변수

# 각 접미사 처리
for s in Suffix:
    bad = 0  # 현재 접미사에서 나쁜 알파벳의 수를 저장할 변수
    differ = 0  # 이전 접미사와 다른 위치를 찾기 위한 변수

    # 접미사 하나하나 확인
    for i in range(len(s)):
        # 이전 접미사와 다른가?(길이를 넘거나)
        if i >= len(before) or before[i] != s[i]:
            differ = True
        # 그 알파벳이 나쁜가?
        if al[ord(s[i]) - ord('a')] == '0':
            bad += 1
        # 나쁨 초과시 반복중단
        if bad > k:
            break
        # 그렇지 않고 다르면 좋은 문자열
        elif differ:
                answer += 1

    before = s  # 현재 접미사를 이전 접미사로 갱신

print(answer)  # 최종적으로 좋은 부분 문자열의 개수를 출력
