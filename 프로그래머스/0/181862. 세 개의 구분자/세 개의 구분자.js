function solution(myStr) {
    myStr = myStr.split(/[a-c]/).filter(Boolean);
    
    if(!myStr.length) myStr = ["EMPTY"];
    
    return myStr;
}