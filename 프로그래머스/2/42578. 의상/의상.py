def solution(clothes):
    dic = {}
    answer = 1
    for clothes_name, clothes_spec in clothes:
        dic[clothes_spec] = dic.get(clothes_spec,0)+1
    
    for v in dic.values():
        answer *= (v+1)
    
    return answer-1
        