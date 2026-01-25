function buildTree(info, edges){
    const tree = Array.from({length: info.length}, () => []);
    for(const [from, to] of edges){
        tree[from].push(to);
    }
    return tree;
}

function solution(info, edges){
    const tree = buildTree(info, edges);
    let maxSheep = 0;
    
    function dfs(current, sheep, wolf, candiates){
        // 지금 상태에서 최대 양 갱신
        maxSheep = Math.max(maxSheep, sheep);
        
        // 현재 노드의 자식들을 후보에 추가 (후보 = 다음에 갈 수 있는 노드들)
        const nextCandiates = new Set(candiates);
        for(const child of tree[current]){
            nextCandiates.add(child);
        }
        
        // 후보들 중 하나를 골라 다음 상태로 재귀
        for(const next of nextCandiates){
            const newCandiates = new Set(nextCandiates);
            newCandiates.delete(next);
            
            if(info[next]){
                if(wolf + 1 < sheep){
                    dfs(next, sheep, wolf + 1, newCandiates);
                }
            }else{
                dfs(next, sheep + 1, wolf, newCandiates);
            }
        }
    }
    
    dfs(0, 1, 0, new Set());
    
    return maxSheep;
}