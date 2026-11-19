T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
	a = float(input())
	s = ""
	while a > 0 and len(s) < 13:
		a *= 2
		if a >= 1:
			s += "1"
			a -= 1
		else:
			s += "0"
        
	if a > 0:
		print(f"#{test_case} overflow")
	else:
		print(f"#{test_case} {s}")
            
    
