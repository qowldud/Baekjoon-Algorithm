function solution(myString) {
    const arr = myString.split("x");
    console.log(arr);
    return arr.map((str) => str.length);
}