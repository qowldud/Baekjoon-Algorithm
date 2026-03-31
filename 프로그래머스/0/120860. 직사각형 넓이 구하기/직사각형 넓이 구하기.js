function solution(dots) {
    let X;
    let Y;
    
    for(let i = 0; i < 3; i++){
        if(dots[i][0] !== dots[i+1][0]){
            X = Math.abs(dots[i][0] - dots[i+1][0]);
        }
        if(dots[i][1] !== dots[i+1][1]){
            Y = Math.abs(dots[i][1] - dots[i+1][1]);
        }
    }
    
    return X * Y;
}