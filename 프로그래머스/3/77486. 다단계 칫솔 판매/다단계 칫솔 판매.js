function solution(enroll, referral, seller, amount) {
    const ref = {};
    const result = {};
    
    for(let i = 0; i < enroll.length; i++){
        ref[enroll[i]] = referral[i];
        result[enroll[i]] = 0;
    }
    
    for(let i = 0; i < seller.length; i++){
        let name = seller[i];
        let price = amount[i] * 100;
        
        while(name !== '-' && price){
            const newPrice = Math.floor(price * 0.1);
            result[name] += price - newPrice;
            price = newPrice;
            name = ref[name];
        }
    }
    
    const answer = Object.keys(result).map(item => result[item]);
    return answer;
}