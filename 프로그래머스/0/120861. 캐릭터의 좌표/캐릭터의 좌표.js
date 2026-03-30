function solution(keyinput, board) {
    let answer = [0, 0];
    
    const lastX = board[0]/2;
    const lastY = board[1]/2;
    
    function check(x, y){
        if(x < -lastX || x > lastX || y < -lastY || lastY < y) return false;
        return true;
    }
    
    for(const key of keyinput){
        switch (key) {
            case "left":
                if(check(answer[0] - 1, answer[1])){
                    answer[0]--;
                }
                break;
            case "right":
                if(check(answer[0] + 1, answer[1])){
                    answer[0]++;
                }
                break;
            case "up":
                if(check(answer[0], answer[1] + 1)){
                    answer[1]++;
                }
                break;
            case "down":
                if(check(answer[0], answer[1] - 1)){
                    answer[1]--;
                }
                break;
        }
    }
    
    return answer;
}