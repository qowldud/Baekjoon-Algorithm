function solution(arr, intervals) {
    var answer = [];
    
    for(let i = 0; i < intervals.length; i++){
        const [a, b] = intervals[i];
        
        for(let j = a; j <= b; j++){
            answer.push(arr[j]);
        }
    }
    
    return answer;
}