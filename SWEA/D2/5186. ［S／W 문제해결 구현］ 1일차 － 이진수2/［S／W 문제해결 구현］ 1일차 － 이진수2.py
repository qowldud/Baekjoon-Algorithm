T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    n = 0
    s = ""
    a = float(input())
    while a != int(a):
        n += 1
        a *= 2
        if n == 13:
            break

    if n >= 13:
        print(f"#{test_case} overflow")
    else:
        while n > 0:
            s += str(int(a % 2))
            a /= 2
            n -= 1
        print(f"#{test_case} {s[::-1]}")
            
    
