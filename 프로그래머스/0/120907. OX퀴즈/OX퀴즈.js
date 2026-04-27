function solution(quiz) {
    const answer = []
    
    for(let i = 0; i < quiz.length; i++){
        const arr = quiz[i].split(" ");
        console.log(arr)
        
        if(arr[1] === '-'){
            if(Number(arr[0]) - Number(arr[2]) === Number(arr[4])){
                answer.push("O")
            }else answer.push("X")
        }else{
            if(Number(arr[0]) + Number(arr[2]) === Number(arr[4])){
                answer.push("O")
            }else answer.push("X")
        }
    }
    
    return answer
}