function solution(arr, queries) {
    for(let k = 0; k < queries.length; k++){
        const [i,j] = queries[k];
        
        let a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
    }
    return arr;
}