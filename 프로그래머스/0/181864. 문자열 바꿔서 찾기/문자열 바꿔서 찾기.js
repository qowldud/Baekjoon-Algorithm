function solution(myString, pat) {
    let revPat = '';
    
    for(let i = 0; i < pat.length; i++){
        if(pat[i] === 'A'){
            revPat += 'B';
        }else{
            revPat += 'A';
        }
    }
    
    return +myString.includes(revPat);
}