#include <iostream>
using namespace std;

int main(void){
    int N,M,K;
    cin>>N>>M;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
    cin>>M>>K;
    int B[M][K];
    for(int i=0;i<M;i++){
        for(int j=0;j<K;j++){
            cin>>B[i][j];
        }
    }
    int r[N][K];
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            r[i][j] = 0;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            for(int z=0;z<M;z++){
                r[i][j] += A[i][z]*B[z][j];
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            cout<<r[i][j]<<" ";
        }
        cout<<'\n';
    }
}