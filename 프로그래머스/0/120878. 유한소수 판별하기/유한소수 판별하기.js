function solution(a, b) {
    while(1){
        if(b%2 === 0){
            b /= 2;
        }else if(b%5 === 0){
            b /= 5;
        }else break;
    }
    
    if(b === 1 || a%b === 0) return 1;
    
    return 2;
}