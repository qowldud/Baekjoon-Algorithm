function solution(board, moves) {
    var answer = 0;
    
    const stack = [];
    
    for(var i = 0; i < moves.length; i++){
        const a = moves[i];

        for(var j = 0; j < board.length; j++){
            const k = board[j][a-1];
            if(k > 0){
                if(stack.length > 0 && stack[stack.length - 1] === k){
                    stack.pop();
                    answer = answer + 2;
                }else{
                    stack.push(k);
                }
                board[j][a-1] = 0;
                break;
            }
        }
    }
        
    return answer;
}