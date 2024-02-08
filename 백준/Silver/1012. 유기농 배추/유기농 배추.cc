#include <iostream>

using namespace std;

int array[51][51];
bool BOOL[51][51];
int M,N;

void dfs(int i, int j){

        if((array[i][j-1]==1)&&(j-1)>=0){
            if(BOOL[i][j-1] == false){
                BOOL[i][j-1] = true;
                dfs(i,j-1);
            }
        }
        if((array[i][j+1]==1)&&(j+1)<M){
            if(BOOL[i][j+1] == false){
                BOOL[i][j+1] = true;
                dfs(i,j+1);
            }
        }
        if((array[i-1][j]==1)&&(i-1)>=0){
            if(BOOL[i-1][j] == false){
                BOOL[i-1][j] = true;
                dfs(i-1,j);
            }
        }
        if((array[i+1][j]==1)&&(i+1)<N){
            if(BOOL[i+1][j] == false){
                BOOL[i+1][j] = true;
                dfs(i+1,j);
            }
        }
    }

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin>>T;
    while(T--){
        int K;
        int count = 0;
        for(int i=0; i<51;i++){
            for(int j=0;j<51;j++){
                array[i][j] = 0;
                BOOL[i][j] = false;
            }
        }

        cin>>M>>N>>K;

        for(int i=0;i<K;i++){
            int a,b;
            cin>>a>>b;
            array[b][a] = 1;
        }

        for(int i=0; i<N; i++){
            for(int j=0;j<M; j++){
                if((!BOOL[i][j])&&array[i][j]==1){
                    BOOL[i][j] = true;
                    dfs(i,j);
                    count++;
                }
            }
        }
        cout<<count<<'\n';
    }

}