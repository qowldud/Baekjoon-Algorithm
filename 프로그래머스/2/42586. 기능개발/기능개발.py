import math

def solution(progresses, speeds):
    answer = []

    current_release_day = math.ceil((100 - progresses[0]) / speeds[0])
    count = 1

    for progress, speed in zip(progresses[1:], speeds[1:]):
        day = math.ceil((100 - progress) / speed)

        if day <= current_release_day:
            count += 1
        else:
            answer.append(count)
            current_release_day = day
            count = 1

    answer.append(count)
    return answer