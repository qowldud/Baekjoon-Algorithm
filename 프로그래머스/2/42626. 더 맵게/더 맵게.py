from heapq import heapify, heappop, heappush

def solution(scoville, K):
    answer = 0
    heapify(scoville)
    
    while True:
        if len(scoville) == 1:
            if scoville[0] < K:
                return -1
            else:
                return answer
        
        min1 = heappop(scoville)
        if min1 >= K:
            return answer
        min2 = heappop(scoville)

        heappush(scoville, min1 + min2*2)
        answer += 1
        