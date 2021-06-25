import heapq

it = [1,3,5,7,9,2,4,6,8,0]

hi = heapq

def sort():
    h=[]
    res=[]
    for v in it:
        hi.heappush(h, v)

    for i in range(len(h)):
        res.append(hi.heappop(h))
    return res

print(sort())
