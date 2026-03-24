function solution(arr) {
    let a = 0;
    while(1){
        if(arr.length <= Math.pow(2, a)){
            arr.push(...new Array(Math.pow(2,a) - arr.length).fill(0));
            return arr;
        }else{
            a++;
        }
    }
}