import collections

def solution(nums):
    li = collections.Counter(nums)
    n = len(nums)
    
    if n//2 >= len(li):
        return len(li)
    else:
        return n//2