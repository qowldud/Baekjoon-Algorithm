def solution(board):
    n = len(board)
    danger = set()
    for i, row in enumerate(board):
        for j, x in enumerate(row):
            if not x:
                continue
            danger.update((i+di, j+dj) for di in [-1, 0, 1] for dj in [-1, 0, 1])
            
    return n*n - sum(0<= x < n and 0<= y <n for x, y in danger)
            
        