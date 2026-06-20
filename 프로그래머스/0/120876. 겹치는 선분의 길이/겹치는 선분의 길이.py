def solution(lines):
    n = {}
    answer = 0
    for row in lines:
        for j in range(row[0], row[1]):
            n[j] = n.get(j, 0) + 1
            
            
    for key, value in n.items():
        if value > 1:
            answer += 1
            
    return answer