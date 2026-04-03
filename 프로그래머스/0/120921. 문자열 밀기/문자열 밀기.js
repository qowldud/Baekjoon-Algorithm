function solution(A, B) {
    const arrA = A.split("");
    const arrB = B.split("");
    
    for(let i = 0; i < arrA.length; i++){
        if(JSON.stringify(arrA) === JSON.stringify(arrB)) return i;
        const c = arrA.pop();
        arrA.unshift(c);
    }
    return -1;
}