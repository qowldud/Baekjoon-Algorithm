def solution(prices):
    answer = []
    
    l = len(prices)
    for i in range(l):
        for j in range(i+1, l):
            if prices[i] > prices[j] or j == l-1:
                answer.append(j-i)
                break
    answer.append(0)
    return answer