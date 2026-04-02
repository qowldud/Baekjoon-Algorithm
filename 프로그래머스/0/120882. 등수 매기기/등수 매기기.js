function solution(score) {
    const average = [];
    for(const [english, math] of score){
        average.push((english + math)/2);
    }
    
    average_org = [...average];
    average.sort((a, b) => b-a);
    
    var answer = [];
    
    for(let i = 0; i < average_org.length; i++){
        for(let j = 0; j < average.length; j++){
            if(average_org[i] === average[j]) {
                answer.push(j+1);
                break;
            }
        }
    }
    
    return answer;
}