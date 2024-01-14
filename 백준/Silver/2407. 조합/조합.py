input_str = input()
n, m = map(int, input_str.split())

if n // 2 < m:
    m = n - m

a, b = 1, 1

for i in range(1, m + 1):
    a *= n
    n -= 1
    b *= i

result = a // b
print(result)
