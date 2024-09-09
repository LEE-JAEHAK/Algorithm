import sys
#from collections import Counter
from math import gcd,sqrt

# 입력속도개선
input = sys.stdin.readline 

n = int(input())  # 입력된 수의 개수
#a = Counter(map(int, input().split()))  # 입력된 수들의 빈도를 저장
a = list(map(int, input().split()))  # 입력된 수들의 빈도를 저장


# 약수에 대한 빈도와 GCD를 저장하는 배열 초기화
cnt = [0] * 1000010
gcds = [0] * 1000010

# 각 수에 대해 약수를 계산하고, 그 약수로 가능한 GCD를 계산
#for k, v in a.items():
for num in a:
    # 수의 약수를 계산 (제곱근까지만 반복)
    for i in range(1, int(sqrt(num))+1): # k ** 0.5
        #해당 수가 k의 약수인가요?
        if num % i == 0:
            #c[i] += v  # 약수의 빈도 증가
            cnt[i] += 1  # 약수의 빈도 증가
            #최대공약수가 저장되어 있다면
            if gcds[i] != 0:
                #새로운 값과의 최대공약수를 구해서 리셋
                gcds[i] = gcd(gcds[i], num)
            else:
                #처음보는 수면 그 수가 최대공약수
                gcds[i] = num
            if i*i == num:
                continue
            #c[k//i] += v  # 약수의 빈도 증가
            cnt[num//i] += 1  # 약수의 빈도 증가
            #소수가 저장되어 있다면
            if gcds[num//i] != 0:
                #새로운 값과의 최대공약수를 구해서 리셋
                gcds[num//i] = gcd(gcds[num//i], num)
            else:
                #처음보는 수면 그 수가 최대공약수
                gcds[num//i] = num
            

# 질문 & 답변
for i in range(int(input())):
    q = int(input())
    
    if gcds[q] != q:
        print(-1)
    else:
        print(cnt[q])