function solution(arr) {
    const stk = [];
    for(const num of arr){
        if(!stk.length)stk.push(num);
        else if(stk[stk.length - 1] === num)stk.pop();
        else stk.push(num);
    }
    
    if(!stk.length)return [-1];
    
    return stk;
}