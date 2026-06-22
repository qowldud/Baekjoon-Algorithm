def solution(babbling):
    answer = 0
    
    for i, s in enumerate(babbling): 
        if 'aya' in s:
            s = s.replace('aya',' ')
            if len(s.strip()) == 0:
                print(i)
                answer += 1
                continue
        if 'ye' in s:
            s = s.replace('ye',' ')
            if len(s.strip()) == 0:
                print(i)
                answer += 1
                continue
        if 'woo' in s:
            s = s.replace('woo',' ')
            if len(s.strip()) == 0:
                print(i)
                answer += 1
                continue
        if 'ma' in s:
            s = s.replace('ma',' ')
            if len(s.strip()) == 0:
                print(i)
                answer += 1
    
    return answer