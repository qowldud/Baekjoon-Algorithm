T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
for test_case in range(1, T + 1):
    s1 = input()
    result = ""
    while s1:
        s2 = s1[:4]
        s1 = s1[4:]
        a = ""
        for s in s2:
            a += f"{table.index(s):06b}"
        for i in range(0,len(a),8):
            result += chr(int(a[i:i+8], 2))
    print(f"#{test_case} {result}")

