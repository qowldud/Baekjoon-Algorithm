function solution(num_list, n) {
    var answer = [];
    let num = 0;
    
    while(num < num_list.length){
        answer.push(num_list[num]);
        num += n;
    }
    
    
    return answer;
}