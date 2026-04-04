function solution(numlist, n) {
   let fars = numlist.map((num) => n - num).sort((a, b) => Math.abs(a) - Math.abs(b));
    
   fars.map((far, idx) => {
        if((idx !== fars.length - 1) && (Math.abs(far) === Math.abs(fars[idx +1]))){
            fars[idx] = Math.abs(far);
            fars[idx + 1] = -Math.abs(far);
    }
})
    
    const answer = fars.map((far, idx) => { 
        if(fars.filter((num, i) => i !== idx && Math.abs(num) === Math.abs(far)).length) return n + far;
        else return n - far;
    });
    
    return answer;
                                                  
}