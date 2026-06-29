import math

def solution(progresses, speeds):
    left_progresses = []
    days = []
    max = 0
    count = 1
    for progress in progresses:
        left_progresses.append(100 - progress)
        
    max = math.ceil(left_progresses[0]/speeds[0])
    
    for (progresse, speed) in zip(left_progresses[1:], speeds[1:]):
        day = math.ceil(progresse/speed)
        
        if max >= day:
            count+=1
        else:   
            days.append(count)
            max = day
            count = 1
    
    days.append(count)
    return days
    