def solution(num, total):
    val = sum(range(num+1))
    diff = total - val
    start = diff // num
    return [i+1+start for i in range(num)]