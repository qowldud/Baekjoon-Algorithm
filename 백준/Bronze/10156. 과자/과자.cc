#include <iostream>
using namespace std;

int main(void){
    int K,N,M;
    cin>>K>>N>>M;
    if(K*N<=M)cout<<0<<'\n';
    else cout<<K*N-M<<'\n';
}
