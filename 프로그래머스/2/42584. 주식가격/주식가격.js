function solution(prices) {
    var answer = [];
    
    const n = prices.length;
    
    for(var i = 0; i < n-2; i++){
        const price = prices[i];
        var bool = false;
        for(var j = i + 1; j < n; j++){
            if(prices[j] < price){
                answer.push(j - i);
                bool = true;
                break;
            }
        }
        if(!bool) answer.push(n - i - 1);
    }
    
    answer.push(1);
    answer.push(0);
    return answer;
}