#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N,L;
    cin>>N>>L;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    sort(array,array+N);
    for(int i=0;i<N;i++){
        if(array[i]<=L)L++;
        else break;
    }
    cout<<L<<'\n';
}