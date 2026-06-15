def solution(common):
    n = len(common);
    
    if common[1] - common[0] == common[2] - common[1]:
        return common[n - 1] + common[1] - common[0];
    else:
        return common[n - 1] * (common[1] / common[0]);