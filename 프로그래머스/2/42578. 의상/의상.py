import collections
from functools import reduce

def solution(clothes):
    # 종류별로 숫자를 셀때는 Counter를 생각
    cnt = collections.Counter([kind for name, kind in clothes])
    answer = reduce(lambda x, y: x*(y+1), cnt.values(), 1) - 1
    return answer