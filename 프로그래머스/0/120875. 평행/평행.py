from math import gcd

def solution(dots):
    dots.sort(key=lambda x:x[0])
    
    answer = {}

    for i in range(len(dots)):
        for j in range(i+1, len(dots)):
            if ((dots[j][1] == dots[i][1]) and (dots[j][0] == dots[i][0])):
                return 1
            dx = dots[j][0] - dots[i][0]
            dy = dots[j][1] - dots[i][1]
            answer[f'l{i+1}{j+1}'] = dy / dx
            
    print(answer)
            

    if(answer['l12'] == answer['l34'] or answer['l13'] == answer['l24'] or answer['l14'] == answer['l23']):
        return 1
    
    return 0