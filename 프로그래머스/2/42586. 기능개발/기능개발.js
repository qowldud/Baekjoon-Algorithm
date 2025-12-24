function solution(progresses, speeds) {
    var answer = [];
    
    for(let i = 0; i < progresses.length; i++){
        const a = progresses[i];
        
        progresses[i] = Math.floor((100 - a) / speeds[i]);
        if((100 - a) % speeds[i]) progresses[i] += 1;
    }
    
    while(progresses.length){
        const first = progresses.shift();
        var count = 1;
        
        while(progresses.length && progresses[0] <= first){
            progresses.shift();
            count++;
        }
        answer.push(count);
    }
    
    return answer;
}