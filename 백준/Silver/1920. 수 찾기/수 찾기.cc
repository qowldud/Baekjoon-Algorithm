#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N;
    int array1[N];
    for(int i=0;i<N;i++){
        cin>>array1[i];
    }
    cin>>M;
    int array2[M];
    for(int i=0;i<M;i++){
        cin>>array2[i];
    }
    sort(array1,array1+N);
    for(int i=0;i<M;i++){
        if(binary_search(array1,array1+N,array2[i]))cout<<1<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}