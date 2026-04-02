function solution(score) {
    return score.map((el) => {
        return score.filter((e) => (e[0] + e[1]) / 2 > (el[0] + el[1])/2).length + 1;
    })
}