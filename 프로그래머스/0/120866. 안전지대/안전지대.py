def solution(board):
    answer = 0
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j] == 1:
                for a in range(i-1, i+2):
                    for b in range(j-1, j+2):
                        if(0 <= a < len(board) and 0 <= b < len(board)):
                            if 1 != board[a][b]:
                                board[a][b] = 2
    
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j] == 0:
                answer += 1
                
    return answer
        