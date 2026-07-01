def solution(priorities, location):
    s = []
    count = 0
    for idx, pr in enumerate(priorities):
        s.append([idx, pr])
    
    while True:
        current_max = max(item[1] for item in s)
        if s[0][1] == current_max:
            count+=1
            if s[0][0] == location:
                return count
            s.pop(0)
        else:
            a = s.pop(0)
            s.append(a)

    