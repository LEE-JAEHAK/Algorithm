n,m = map(int,input().split()) # 입력
data = list(map(int, input().split())) # 입력
y = int(ord(n[0])) - int(ord('a')) + 1 # 알파뱃 인덱스
float(n), int(n), str(3), ord('a'), chr(63)
# if '3' in str(i) + str(j) + str(k)  스트링 형변환
visited = [0] * m # 1차원 visited 배열 생성
visited = [[0] * m for _ in range(n)] # n,m visited 배열 생성

arr = [] # n, m 배열 생성 입력 
for i in range(n):
    arr.append(list(map(int,input().split())))

graph = [list(map(int, input().split())) for _ in range(m)] # m*n 배열 생성 입력

graph = [[] for _ in range(3)] # 그래프 5-7

arr=[]
arr.sort() # 정렬
result = sorted(arr)
sorted(student_tuples, key=lambda student: student[2])
sorted(a, key=lambda x:(x[0],-x[1])) # 정렬 다중 조건

lists = [[1,2],[1,2],[3,4],[1,2],[2,1]] # 중복 제거
s = list(set([tuple(a) for a in lists]))