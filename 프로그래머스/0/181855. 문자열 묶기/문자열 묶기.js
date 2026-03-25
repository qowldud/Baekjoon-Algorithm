function solution(strArr) {
    const arr = new Array(31).fill(0);
    
    for(let i = 0; i < strArr.length; i++){
        arr[strArr[i].length]++;
    }
    
    return Math.max(...arr);
}