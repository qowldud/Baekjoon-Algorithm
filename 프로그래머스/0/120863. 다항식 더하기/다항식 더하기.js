function solution(polynomial) {
    const arr = polynomial.split(" + ");
    let a = 0;
    let b = 0;
    
    for(const str of arr){
        if(str.includes("x")){
            a += str.length === 1 ? 1 : Number(str.slice(0, str.length - 1));
        }else{
            b += Number(str);
        }
    }
    
    return a ? b ?`${a !== 1 ? a : ''}x + ${b}`: `${a !== 1 ? a : ''}x` : `${b}`;
}