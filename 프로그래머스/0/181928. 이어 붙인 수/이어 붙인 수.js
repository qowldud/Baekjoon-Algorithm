function solution(num_list) {
    var evenSum = '';
    var oddSum = '';
    
    for(const num of num_list){
        if(num%2 !== 0){
            evenSum += num;
        }else{
            oddSum += num;
        }
    }
    
    
    
    return Number(evenSum) + Number(oddSum);
}