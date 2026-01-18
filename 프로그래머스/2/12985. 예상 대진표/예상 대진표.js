function k(a){
    if(a%2 !== 0) return (a+1)/2;
    else return a/2;
}

function solution(n,a,b)
{
    var answer = 1;
    let k1, k2;
    if(a < b){
        k1 = a;
        k2 = b;
    }else{
        k1 = b;
        k2 = a;
    }

    while(1){
        if(k2 - k1 === 1){
            if(k1%2 !== 0) break;
        }
            k1 = k(k1);
            k2 = k(k2);
            answer++;
    }

    return answer;
}