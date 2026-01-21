function solution(my_string, n) {
    var answer = '';
    const len = my_string.length;
    
    answer = my_string.slice(len - n, len);
    
    return answer;
}