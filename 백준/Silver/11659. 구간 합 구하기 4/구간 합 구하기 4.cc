#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M;
    cin>>N>>M;
    int S[N+1] ={};
    
    for(int i=1;i<=N;i++){
        int a;
        cin>>a;
        S[i] = S[i-1] + a;
    }
    
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        cout<<S[b] - S[a-1]<<'\n';
    }
}