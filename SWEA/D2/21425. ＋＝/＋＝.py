T = int(input())
for test_case in range(1, T + 1):
    a, b, c = sorted(map(int, input().split()))
    n = 0
    while max(a, b) <= c:
        if n%2 == 0:
            a += b
        else:
            b += a
        n += 1
    print(n)