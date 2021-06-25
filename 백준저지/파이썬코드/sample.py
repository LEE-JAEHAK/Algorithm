n,m = map(int,input().split())
graph = [list(map(int, input().split())) for _ in range(m)]
dp = [i for i in range(n+1)]
graph = sorted(graph, key=lambda x:x[2])

def find(x):
    if x == dp[x]:
        return x
    else:
        dp[x] = find(dp[x])
        return dp[x]

def merge(x,y):
    x = find(x)
    y = find(y)
    if x == y:
        return 0
    dp[y] = x
    return 1
    
sum=0
cnt=0
for i in range(m):
    a,b,w = graph[i]
    if merge(a,b):
        cnt += 1
        sum += w
    if cnt == n-1:
        break



print(sum)