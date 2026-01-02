function isEqual(object1, object2){
    const objectKey1 = Object.keys(object1);
    const objectKey2 = Object.keys(object2);
    
    if(objectKey1.length !== objectKey2.length) return false;
    
    for(const key of objectKey1){
        if(object1[key] !== object2[key]) return false;
    }
     return true;
}

function solution(want, number, discount) {
    var answer = 0;
    
    const wantObj = {};
    
    for(let i = 0; i < want.length; i++){
        wantObj[want[i]] = number[i];
    }
    
    for(let i = 0; i < discount.length - 9; i++){
        const discount10d = {};
        for(let j = i; j < i + 10; j ++){
            if(wantObj[discount[j]]){
                discount10d[discount[j]] = (discount10d[discount[j]] || 0 ) + 1;
            }
        }
        
        if(isEqual(discount10d, wantObj)){
            answer++;
        }
    }
    
    return answer;
}