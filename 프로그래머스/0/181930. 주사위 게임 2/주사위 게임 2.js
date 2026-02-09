function solution(a, b, c) {
    const set = new Set([a,b,c]);
    switch(set.size){
        case 1: return calculate([a,b,c], 3);
        case 2: return calculate([a,b,c], 2);
        case 3: return calculate([a,b,c], 1);
    }
}

function calculate(arr, num){
    const [a,b,c] = arr;
    let result = 1;
    for(n = 1; n <= num; n++){
        result *= Math.pow(a, n) + Math.pow(b, n) + Math.pow(c, n);
    }
    return result;
}