function solution(records) {
    var answer = [];
    
    const nickname = {};
    
    for(const record of records){
        const k = record.split(" ");
        
        if(k[0] === "Enter"){
            
            nickname[k[1]] = k[2];
        }else if(k[0] === "Change"){
            nickname[k[1]] = k[2];
        }
    }
    
    
    for(const record of records){
        const k = record.split(" ");
        
        if(k[0] === "Enter"){
            const name = nickname[k[1]];
            
            answer.push(name + "님이 들어왔습니다.");
        }else if(k[0] === "Leave"){
            const name = nickname[k[1]];
            answer.push(name + "님이 나갔습니다.");
        }
    }
    
    return answer;
}