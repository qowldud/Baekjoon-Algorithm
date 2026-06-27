def solution(genres, plays):
    dic = {}
    answer = []
    
    for i in range(len(genres)):
        dic.setdefault(genres[i], []).append((i, plays[i]))
        
    dic = dict(sorted(dic.items(), key=lambda x: sum(play for idx, play in x[1]), reverse=True))
    
    for key, value in dic.items():
        value.sort(key=lambda x: x[1], reverse=True)

        if len(value) == 1:
            answer.append(value[0][0])
        else:
            answer.append(value[0][0])
            answer.append(value[1][0])
            
    return answer
    