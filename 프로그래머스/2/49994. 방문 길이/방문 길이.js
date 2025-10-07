function solution(dirs) {
    let x = 0;
    let y = 0;
    
    const visited = new Set();
    
    for(const dir of dirs){
        let nx = 0;
        let ny = 0;
        
        if(dir === 'U'){
            nx = x;
            ny = y+1;
        }else if(dir === 'D'){
            nx = x;
            ny = y-1;
        }else if(dir === 'R'){
            nx = x+1;
            ny = y;
        }else if(dir === 'L'){
            nx = x-1;
            ny = y;
        }
        
        if(nx > 5 || nx < -5 || ny > 5 || ny < -5) continue;
        
        visited.add(`${x}${y}${nx}${ny}`);
        visited.add(`${nx}${ny}${x}${y}`);
        
        x = nx;
        y = ny;
    }
    return visited.size / 2;
}