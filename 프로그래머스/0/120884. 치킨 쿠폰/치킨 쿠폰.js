function solution(chicken) {
   let answer = Math.floor(chicken / 10);
   let coupon = Math.floor(chicken % 10) + answer;
    
    while(Math.floor(coupon/10) > 0){
        answer += Math.floor(coupon/10);
        coupon = Math.floor(coupon%10) + Math.floor(coupon/10);
    }
    
    return answer;
}