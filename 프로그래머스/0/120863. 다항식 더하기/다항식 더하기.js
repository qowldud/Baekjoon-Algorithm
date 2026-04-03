function solution(polynomial) {
    const terms = polynomial.split(" + ");
    let xSum = 0;
    let numSum = 0;
    
    for(const str of terms){
        if(str.includes("x")){
            xSum += str === "x" ? 1 : Number(str.slice(0, -1));
        }else{
            numSum += Number(str);
        }
    }
    
    const xTerm = xSum ? `${xSum === 1 ? "" : xSum}x` : "";
    const numTerm = numSum ? String(numSum) : "";
    
    return xTerm && numTerm ? `${xTerm} + ${numTerm}` : xTerm || numTerm
}