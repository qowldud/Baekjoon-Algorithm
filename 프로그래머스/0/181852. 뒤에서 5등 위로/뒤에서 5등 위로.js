function solution(num_list) {
    const list = num_list.sort((a,b) => a - b);
    return list.slice(5, list.length);
}