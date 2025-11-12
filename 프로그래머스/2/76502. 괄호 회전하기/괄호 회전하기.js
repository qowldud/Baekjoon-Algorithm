function solution(s) {
    var answer = 0;
    
    const arr = s.split('');
    var stack = [];
    
    
    for(var i=0; i < arr.length; i++){
        var br = false;
        stack = [];
          for(var j=0; j < arr.length; j++){
              br = false;
              if(arr[j] === "[" ||arr[j] === "(" ||arr[j] === "{"){
                  stack.push(arr[j]);
              }else{
                  if(arr[j] === "]"){
                      if(stack.length === 0 || stack.pop() !== "[") {
                          br = true;
                          break;
                      }
                  } else if(arr[j] === ")"){
                      if(stack.length === 0 || stack.pop() !== "(") {
                          br = true;
                          break;
                      }
                  }else if(arr[j] === "}"){
                      if(stack.length === 0 ||stack.pop() !== "{") {
                          br = true;
                          break;
                      }
                  }
              }
          }
        if(stack.length === 0 && !br) {
            answer++;
        }
        const c = arr.shift();
        arr.push(c);
    }
    return answer;
}