#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,K,sum = 0;
    cin>>N>>K;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    for(int i=N-1;i>=0;i--){
        if(array[i]<=K&&K!=0){
            sum += K/array[i];
            K%=array[i];
        }
    }
    cout<<sum<<'\n';
}