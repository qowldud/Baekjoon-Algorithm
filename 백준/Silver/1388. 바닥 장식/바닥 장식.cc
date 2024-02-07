#include <iostream>

using namespace std;

char array[50][50] = {0,};
bool BOOL[50][50] = {false,};
void dfs(int a,int b){
        if(array[a][b]=='-'){
            BOOL[a][b] = true;
            if(array[a][b+1] == '-'&&(b+1)<50)dfs(a,b+1);
        }
        else if(array[a][b]=='|'){
            BOOL[a][b] = true;
            if(array[a+1][b]=='|'&&(a+1)<50)dfs(a+1,b);
        }
    }

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M,count = 0;
    cin>>N>>M;

    for(int i=0;i<N;i++){
        for(int j=0; j < M; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
            if(!BOOL[i][j]){
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<count<<'\n';

}