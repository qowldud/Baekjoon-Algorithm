function solution(id_list, report, k) {
    var answer = [];
    
    const a = {};
    const ID = {};
    
    for(let i=0; i < id_list.length; i++){
        ID[id_list[i]] = i;
        answer.push(0);
    }
    
    for(let i = 0 ; i < report.length; i++){
        const IDs = report[i].split(" ");
        
        if(!a[IDs[1]]){
            a[IDs[1]] = [];          
        }
        
        if(!a[IDs[1]].includes(IDs[0]))a[IDs[1]].push(IDs[0]);
    }
    
    for(let i = 0; i < id_list.length; i++){
        const name = id_list[i];
        
        
        if(a[name] && a[name].length >= k){
            for(let j = 0; j < a[name].length; j++){
                const n = a[name][j];
                answer[ID[n]] += 1;
            }
        }
    }
    
    return answer;
}