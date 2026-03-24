function solution(myString, pat) {
    const len = pat.length;
    let answer = 0;
   for(let i=0; i < myString.length - len + 1; i++){
       if(myString.slice(i, i+len) === pat) answer++;
   }
    
    return answer;
}