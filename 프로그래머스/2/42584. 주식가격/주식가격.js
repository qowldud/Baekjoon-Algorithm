function solution(prices) {
    const n = prices.length
    var answer = new Array(n).fill(0);
    const stack = [];
    
    stack.push(0);
    
    for(var i = 1; i < n; i++){
        while(stack.length > 0 && prices[stack[stack.length - 1]] > prices[i]){
            answer[stack[stack.length - 1]] = i - stack.pop();
        }
        
        stack.push(i);
    }
    
    while(stack.length){
        const a = stack.pop();
        answer[a] = n - a - 1;
    }
    
    return answer;
}