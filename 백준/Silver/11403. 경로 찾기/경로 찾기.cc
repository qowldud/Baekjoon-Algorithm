#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > array1;  // 도달 여부 기록용 2차원 벡터
vector<vector<int> > v;       // 인접 리스트
int N;                       // 노드 수

// DFS로 i2에서 시작해서 도달할 수 있는 모든 노드를 탐색
void def(int i, int i2, vector<bool> &visited) {
    visited[i] = true;  // 현재 노드 i를 방문했음을 기록
    for (int k = 0; k < v[i].size(); k++) {
        int a = v[i][k];
        if (array1[i2][a] == 0) {  // i2에서 a로 도달할 수 있는지 기록
            array1[i2][a] = 1;
            if (!visited[a]) {     // a가 아직 방문되지 않았다면
                def(a, i2, visited);  // 재귀적으로 a를 탐색
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 노드 수 입력
    cin >> N;
    
    // 도달 여부 저장용 2차원 벡터와 인접 리스트 초기화
    array1.resize(N, vector<int>(N, 0));
    v.resize(N);

    // 인접 행렬 입력 받아 인접 리스트로 변환
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int a;
            cin >> a;
            if (a == 1) {
                v[i].push_back(j);  // i에서 j로 가는 경로를 추가
            }
        }
    }

    // 각 노드에 대해 DFS 수행하여 도달 가능한 노드를 기록
    for (int i = 0; i < N; i++) {
        vector<bool> visited(N, false);  // DFS에서 사용할 방문 배열
        def(i, i, visited);  // i에서 시작하는 DFS 수행
    }

    // 결과 출력: i에서 j로 도달 가능하면 1, 불가능하면 0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << array1[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
