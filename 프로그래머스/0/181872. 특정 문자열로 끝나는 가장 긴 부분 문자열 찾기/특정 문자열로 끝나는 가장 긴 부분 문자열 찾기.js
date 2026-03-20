function solution(myString, pat) {
   const rev = myString.split("").reverse().join("");
    const revPat = pat.split("").reverse().join("");
    const idx = rev.indexOf(revPat);
    return rev.slice(idx, rev.length).split("").reverse().join("");
}