function solution(array) {
    let answer = 0;
    let idx = 0;
    let BOOL = false;
    let max = 0;
    
    array.sort((a, b) => a - b);
    
    while(idx !== array.length){
        const start = array[idx];
        const end = array.lastIndexOf(start);
        
        const bin = end - idx + 1;
        
        if(max < bin){
            answer = start;
            max = bin;
            BOOL = false;
        }else if(max === bin) {
            BOOL = true;
        }
        
        idx = end + 1;
    }
    
    return BOOL ? -1 : answer;
    
}