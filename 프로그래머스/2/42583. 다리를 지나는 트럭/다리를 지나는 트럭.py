def solution(bridge_length, weight, truck_weights):
    current_weight = 0
    s = []
    answer = 0
    
    while truck_weights or s:
        answer+=1
        for i in range(len(s)):
            s[i][1] -= 1
        if s and s[0][1] == 0:
            current_weight -= s[0][0]
            s.pop(0)
        
        if truck_weights and current_weight + truck_weights[0] <= weight and len(s) < bridge_length:
            current_weight += truck_weights[0]
            s.append([truck_weights[0], bridge_length])
            truck_weights.pop(0)

    return answer
        
    
    
    