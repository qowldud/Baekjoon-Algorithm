function solution(numbers) {
    var answer = [];
    const n = numbers.length;
    for(let i=0;i<n-1;i++){
        for(let j=i+1;j<n;j++){
            answer.push(numbers[i] + numbers[j]);
        }
    }
    const newAnswer = [...new Set(answer)].sort((a,b) => a - b);
    return newAnswer;
}