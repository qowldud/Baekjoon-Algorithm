function solution(N, stages) {
    var answer = [];
    var a = [];
    var b = [];
    
    for(let i=1;i<=N;i++){
        var m = 0;
        var n = 0;
        for(let j = 0; j<stages.length;j++){
            if(stages[j] >= i) m++;
            if(stages[j] === i) n++;
        }
        if(m === 0){
            a.push(0);
            b.push(0);
        }else{
            a.push(n/m);
            b.push(n/m);
        }

    }
    
    var newArray = [...new Set(a)].sort((a,b) => b-a);
    
    for(let i=0;i<newArray.length;i++){
        for(let j=0;j<b.length;j++){
            if(newArray[i] == b[j])answer.push(j+1);
        }
    }
    
    return answer;
}