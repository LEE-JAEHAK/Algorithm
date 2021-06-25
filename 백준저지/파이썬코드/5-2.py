from collections import deque

q = deque()

q.append(1)
q.append(2)
q.append(3)
q.popleft()
q = list(q)

print(q)
