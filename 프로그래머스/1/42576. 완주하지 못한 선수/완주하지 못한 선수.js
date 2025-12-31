function solution(participant, completion) {
    var answer = '';
    
    const hashTable = {};
    
    for(const people of participant){
        if(hashTable[people]){
            hashTable[people]++;
        }else{
            hashTable[people] = 1;
        }

    }
    
    for(const people of completion){
        hashTable[people]--;
    }
    
    
    
    for(const people of participant){
        if(hashTable[people]){
            answer = people;
            break;
        }
    }
    
    return answer;
}