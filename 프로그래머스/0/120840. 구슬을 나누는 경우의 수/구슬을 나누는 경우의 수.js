function solution(balls, share) {
    let num1 = 1;
    let num2 = 1;
    
    for(let i = 0; i < share; i++){
        num1 *= balls-i;
    }
    
    for(let i = 1; i <= share; i++){
        num2 *= i;
    }
    
    return Math.round(num1 / num2);
}