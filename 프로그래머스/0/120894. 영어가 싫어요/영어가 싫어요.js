function solution(numbers) {
    let answer = '';
    let start = 0;
    const num = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9
    };
    
    for(let i = 0; i < numbers.length+1; i++){
        const s = num[numbers.slice(start, i)];
        if(s || s ===0){
            answer += s;
            start = i;
        }
    }
    return Number(answer);
    
}