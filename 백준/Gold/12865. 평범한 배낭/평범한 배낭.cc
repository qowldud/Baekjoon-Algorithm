#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int N,K;
    cin>>N>>K;
    int array[N+1][K+1] = {};
    int weight[N+1] = {0,};
    int price[N+1] = {0,};
    
    for(int i=1; i<=N; i++){
        cin>>weight[i]>>price[i];
    }

    for(int i=1;i<=N;i++){
        for(int j=1; j <= K; j++){
            if(weight[i] > j) array[i][j] = array[i-1][j];
            else{
                array[i][j] = max(array[i-1][j-weight[i]] + price[i],array[i-1][j]);
            }
        }
    }
    cout<<array[N][K];
}