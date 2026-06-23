def solution(participant, completion):
    dic = {}
    for part in participant:
        dic[part] = dic.get(part, 0) + 1
        
    for name in completion:
        if name in dic:
            dic[name] -= 1
            if(dic[name] == 0):
                del dic[name]
            
    for key in dic:
        return key