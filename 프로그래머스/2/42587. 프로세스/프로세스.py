def solution(priorities, location):
    s = [(idx, pr) for idx, pr in enumerate(priorities)]
    count = 0
    
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

    