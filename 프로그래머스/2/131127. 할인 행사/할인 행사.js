function solution(want, number, discount) {
    var answer = 0;
    
    const w = {};

    
    for(let i=0; i < discount.length - 9; i++){
        
        let bool = false;
        
        for(let i = 0; i < want.length; i++){
            w[want[i]] = number[i];
            }
        
        for(let j = i; j < i + 10; j++){
            if(w[discount[j]]){
                w[discount[j]]--;
            }
        }
        
        for(let j = 0; j < want.length; j++){
            if(w[want[j]]){
                bool = true;
                break;
            }
        }
        
        if(!bool)answer++;
    }
    
    return answer;
}