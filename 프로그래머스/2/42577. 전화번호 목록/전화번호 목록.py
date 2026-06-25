def solution(phone_book):
    dic = {}
    for num in phone_book:
        dic[num] = True
    
    for num in phone_book:
        for i in range(len(num)-1):
            if dic.get(num[:i+1]):
                return False
    
    return True